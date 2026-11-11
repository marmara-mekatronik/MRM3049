#include <iostream>
#include <cstdint>

// 1. Verimsiz Siralama: Kucuk ve buyuk tipler karisik
struct VerimsizYapi {
    char    c1;  // 1 Bayt + 3 Bayt Dolgu (Padding)
    int32_t i;   // 4 Bayt (Dogal 4'un katina hizalanmis)
    char    c2;  // 1 Bayt + 3 Bayt Son Dolgu (Yapinin toplam boyutu en buyuk uye olan 4'un kati olmalidir)
}; // sizeof = 12 Bayt (6 Bayt Gercek Veri + 6 Bayt Dahili Fragmantasyon!)

// 2. Optimize Siralama: Buyukten kucuge
struct VerimliYapi {
    int32_t i;   // 4 Bayt
    char    c1;  // 1 Bayt
    char    c2;  // 1 Bayt + 2 Bayt Son Dolgu
}; // sizeof = 8 Bayt (6 Bayt Gercek Veri + 2 Bayt Dolgu)

// 3. #pragma pack(1) ile Dolgunun Kapatilmasi (Paketlenmis Yapi)
#pragma pack(push, 1)
struct PaketlenmisYapi {
    char    c1;  // 1 Bayt
    int32_t i;   // 4 Bayt
    char    c2;  // 1 Bayt
}; // sizeof = 6 Bayt (Sifir dolgu, %0 dahili fragmantasyon!)
#pragma pack(pop)

int main() {
    std::cout << "====================================================\n";
    std::cout << "  C++ Hafta 6: Bellek Fragmantasyonu ve Padding\n";
    std::cout << "====================================================\n\n";

    std::cout << "[1] Verimsiz Yapi (Karisik Siralama):\n";
    std::cout << "    sizeof(VerimsizYapi) : " << sizeof(VerimsizYapi) << " Bayt\n";
    std::cout << "    Gercek Veri Boyutu   : 6 Bayt\n";
    std::cout << "    Dahili Fragmantasyon : " << sizeof(VerimsizYapi) - 6 << " Bayt Atil Dolgu (%50 Kayip!)\n\n";

    std::cout << "[2] Optimize Yapi (Buyukten Kucuge Siralama):\n";
    std::cout << "    sizeof(VerimliYapi)  : " << sizeof(VerimliYapi) << " Bayt\n";
    std::cout << "    Gercek Veri Boyutu   : 6 Bayt\n";
    std::cout << "    Dahili Fragmantasyon : " << sizeof(VerimliYapi) - 6 << " Bayt Dolgu (%25 Kayip)\n";
    std::cout << "    RAM Kazanci          : %33 Bellek Tasarrufu saglandi!\n\n";

    std::cout << "[3] Paketlenmis Yapi (#pragma pack(push, 1)):\n";
    std::cout << "    sizeof(Paketlenmis)  : " << sizeof(PaketlenmisYapi) << " Bayt\n";
    std::cout << "    Dahili Fragmantasyon : 0 Bayt (Tam Sıkıştırma - CAN Bus icin zorunlu)\n\n";

    // 1000 elemanlık sensör dizisinde bellek farkı
    const int ELEMAN = 1000;
    std::cout << "[4] 1000 Elemanlik Dizi Icin Bellek Karsilastirmasi:\n";
    std::cout << "    Verimsiz Dizi : " << sizeof(VerimsizYapi) * ELEMAN << " Bayt\n";
    std::cout << "    Verimli Dizi  : " << sizeof(VerimliYapi) * ELEMAN << " Bayt\n";
    std::cout << "    Toplam Tasarruf: " << (sizeof(VerimsizYapi) - sizeof(VerimliYapi)) * ELEMAN 
              << " Bayt (" << ((sizeof(VerimsizYapi) - sizeof(VerimliYapi)) * ELEMAN) / 1024.0 << " KB)\n";

    return 0;
}
