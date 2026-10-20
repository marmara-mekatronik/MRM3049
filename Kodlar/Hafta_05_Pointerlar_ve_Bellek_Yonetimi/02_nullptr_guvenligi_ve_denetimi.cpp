/**
 * @file 02_nullptr_guvenligi_ve_denetimi.cpp
 * @brief İlklendirilmemiş işaretçi riskleri ve modern C++ nullptr güvenliği
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 5
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

// Savunmacı programlama: Dışarıdan işaretçi alan fonksiyon önce nullptr kontrolü yapmalıdır
void sensorTelemetriOku(const int* ptr) {
    if (ptr == nullptr) { // veya: if (!ptr)
        std::cerr << "[HATA] Geçersiz sensör adresi! Deferans engellendi.\n";
        return;
    }
    std::cout << "[BİLGİ] Okunan Telemetri Değeri: " << *ptr << " mV\n";
}

int main() {
    // 1. Güvenli Boş İşaretçi İlklendirmesi
    int* bosPtr = nullptr;
    sensorTelemetriOku(bosPtr); // Güvenle yakalanır, çökme olmaz

    // 2. Geçerli Bir Değişken Adresinin Gönderilmesi
    int bataryaGerilimi = 3700; // 3700 mV
    int* gecerliPtr = &bataryaGerilimi;
    sensorTelemetriOku(gecerliPtr);

    return 0;
}
