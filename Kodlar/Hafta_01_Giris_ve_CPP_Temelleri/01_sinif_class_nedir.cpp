/**
 * @file 01_sinif_class_nedir.cpp
 * @brief Sınıf (Class) Nedir?
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

// Sınıf: Sadece bir tanımdır (Kalıp)
class Motor {
private:
    int devirHizi;
    bool calisiyorMu;
public:
    void baslat();
    void hiziAyarla(int yeniHiz);
    void durdur();
};
