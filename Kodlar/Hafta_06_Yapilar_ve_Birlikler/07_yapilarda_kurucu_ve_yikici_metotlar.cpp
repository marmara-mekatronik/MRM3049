/**
 * @file 07_yapilarda_kurucu_ve_yikici_metotlar.cpp
 * @brief Yapılarda Kurucu (Constructor) ve Yıkıcı (Destructor) metotlar ile RAII ilkesi
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <string>

struct DonanimTamponu {
    std::string cihazAdi;
    int* veriTamponu;
    int kapasite;

    // Kurucu Metot (Constructor): Uye ilklendirme listesi ve dinamik bellek tahsisi
    DonanimTamponu(const std::string& ad, int k) 
        : cihazAdi(ad), kapasite(k) {
        veriTamponu = new int[kapasite];
        std::cout << "[Kurucu] '" << cihazAdi << "' icin " 
                  << kapasite * sizeof(int) << " bayt bellek tahsis edildi.\n";
    }

    // Yikici Metot (Destructor): RAII uyarinca bellek iadesi
    ~DonanimTamponu() {
        delete[] veriTamponu;
        veriTamponu = nullptr;
        std::cout << "[Yikici] '" << cihazAdi << "' bellegi basariyla temizlendi.\n";
    }

    void veriYaz(int indis, int deger) {
        if (indis >= 0 && indis < kapasite) {
            veriTamponu[indis] = deger;
        }
    }
};

int main() {
    std::cout << "--- 1. Blok Baslangici ---\n";
    {
        // Blok icerisinde yerel nesne olusturuldu
        DonanimTamponu canTampon("CAN_BUS_FIFO", 128);
        canTampon.veriYaz(0, 0x1A);
        std::cout << "Kapsam icerisinde tampon aktif kullaniliyor.\n";
    } // Blok sonu: Kapsam disina cikildigi anda yikici otomatik tetiklenir!

    std::cout << "--- 2. Blok Sonu: Nesne artik yok ---\n";
    return 0;
}
