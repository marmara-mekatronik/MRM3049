/**
 * @file 02_sinif_class_nedir_02.cpp
 * @brief Sınıf (Class) Nedir?
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

// Sınıf şablonu kullanılarak nesne üretimi:
int main() {
    // 1. ve 2. Nesnelerin bellekte oluşturulması:
    Motor solMotor;  // RAM'de yer tahsis edilir
    Motor sagMotor;  // Bağımsız ikinci nesne

    solMotor.hiziAyarla(1200);
    sagMotor.hiziAyarla(1500);
    solMotor.baslat();
    sagMotor.baslat();
    return 0;
}
