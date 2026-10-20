/**
 * @file 14_bellek_hizalama_ve_pragma_pack.cpp
 * @brief Bellek hizalama (Memory Alignment), dolgu baytları (Padding) ve #pragma pack(1)
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

// 1. Kötü hizalanmış yapı (Gereksiz dolgu baytları ile bellek israfı)
struct KotuHizalanmis {
    char c1;   // 1 byte + 3 byte dolgu (padding)
    int i;     // 4 byte
    char c2;   // 1 byte + 3 byte kuyruk dolgusu
}; // Toplam: 12 bayt

// 2. İyi hizalanmış yapı (Üyeler büyükten küçüğe sıralı)
struct IyiHizalanmis {
    int i;     // 4 byte
    char c1;   // 1 byte
    char c2;   // 1 byte + 2 byte kuyruk dolgusu
}; // Toplam: 8 bayt

// 3. Paketlenmiş yapı (Hiçbir dolgu baytı eklenmez, saf iletişim paketi)
#pragma pack(push, 1)
struct PaketlenmisCerceve {
    char c1;   // 1 byte
    int i;     // 4 byte
    char c2;   // 1 byte
}; // Toplam: Tam 6 bayt!
#pragma pack(pop)

int main() {
    std::cout << "--- 1. Dolgu Baytlari ve Bellek Boyutlari ---\n";
    std::cout << "sizeof(KotuHizalanmis)    : " << sizeof(KotuHizalanmis) << " bayt\n";
    std::cout << "sizeof(IyiHizalanmis)     : " << sizeof(IyiHizalanmis) << " bayt\n";
    std::cout << "sizeof(PaketlenmisCerceve): " << sizeof(PaketlenmisCerceve) << " bayt\n\n";

    std::cout << "--- 2. alignof Degerleri ---\n";
    std::cout << "alignof(int)              : " << alignof(int) << " bayt siniri\n";
    std::cout << "alignof(KotuHizalanmis)   : " << alignof(KotuHizalanmis) << " bayt\n";
    std::cout << "alignof(PaketlenmisCerceve): " << alignof(PaketlenmisCerceve) << " bayt (1-byte hizali)\n\n";

    std::cout << "Not: Ag paketlerinde ve seri donanim haberlesmesinde alici ile vericinin\n"
              << "ayni dolgusuz bellek duzenine sahip olmasi icin #pragma pack(1) kullanilir.\n";

    return 0;
}
