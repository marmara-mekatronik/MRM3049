/**
 * @file 12_mekatronik_dairesel_telemetri_tamponu.cpp
 * @brief Dinamik dairesel telemetri tamponu (Ring Buffer) ve işaretçi aritmetiği ile filtreleme
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 5
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

// İşaretçi aritmetiği kullanarak hareketli ortalama hesaplayan hızlı filtre
double telemetriOrtalamaHesapla(const double* baslangic, int boyut) {
    if (baslangic == nullptr || boyut <= 0) {
        return 0.0;
    }

    double toplam = 0.0;
    const double* ptr = baslangic; // Gezici işaretçi

    for (int i = 0; i < boyut; ++i) {
        toplam += *ptr; // Deferans ile değere eriş
        ptr++;          // İşaretçi aritmetiği: Bir sonraki double hücresine ilerle (+8 bayt)
    }

    return (toplam / boyut);
}

int main() {
    int kapasite = 5;
    std::cout << "--- Mekatronik Sensör Telemetri Tamponu (Boyut: " << kapasite << ") ---\n";

    // 1. Dinamik bellek tamponu tahsisi
    double* tampon = new double[kapasite]{1.25, 2.50, 3.10, 4.20, 5.45};

    // 2. İşaretçi aritmetiği ile filtreden geçirme
    double ortalamaGerilim = telemetriOrtalamaHesapla(tampon, kapasite);
    std::cout << "Hesaplanan Hareketli Ortalama : " << ortalamaGerilim << " V\n";

    // 3. Eşik kontrolü (3.3V denetimi)
    if (ortalamaGerilim > 3.3) {
        std::cout << "[DURUM] Ortalama voltaj kritik eşik değerinin (3.3V) üzerindedir!\n";
    }

    // 4. Bellek sızıntısız temizleme
    delete[] tampon;
    tampon = nullptr;

    std::cout << "[SİSTEM] Telemetri tamponu güvenle serbest bırakıldı.\n";
    return 0;
}
