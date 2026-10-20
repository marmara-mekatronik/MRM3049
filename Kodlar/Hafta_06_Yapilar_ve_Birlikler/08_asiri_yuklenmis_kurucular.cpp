/**
 * @file 08_asiri_yuklenmis_kurucular.cpp
 * @brief Yapılarda aşırı yüklenmiş kurucular: Varsayılan, parametreli ve kopya kurucu
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

struct PID_Ayar {
    double Kp;
    double Ki;
    double Kd;

    // 1. Varsayilan Kurucu (Default Constructor)
    PID_Ayar() : Kp(1.0), Ki(0.0), Kd(0.0) {
        std::cout << "[Default Kurucu] Standart P kontrol parametreleri atandi.\n";
    }

    // 2. Parametreli Kurucu (Parameterized Constructor)
    PID_Ayar(double p, double i, double d) : Kp(p), Ki(i), Kd(d) {
        std::cout << "[Parametreli Kurucu] Ozel PID parametreleri atandi.\n";
    }

    // 3. Kopya Kurucu (Copy Constructor)
    PID_Ayar(const PID_Ayar& diger) 
        : Kp(diger.Kp), Ki(diger.Ki), Kd(diger.Kd) {
        std::cout << "[Kopya Kurucu] Baska bir PID ayar nesnesi klonlandi.\n";
    }

    void yazdir(const std::string& etiket) const {
        std::cout << etiket << " -> Kp: " << Kp << " | Ki: " << Ki << " | Kd: " << Kd << "\n";
    }
};

int main() {
    PID_Ayar varsayilanKontrol; // Varsayilan kurucu cagirilir
    varsayilanKontrol.yazdir("Standart Ayar");

    PID_Ayar motorHizKontrol(2.5, 0.8, 0.05); // Parametreli kurucu
    motorHizKontrol.yazdir("Hiz Kontrol");

    PID_Ayar yedekKontrol = motorHizKontrol; // Kopya kurucu cagirilir
    yedekKontrol.yazdir("Yedek Kontrol");

    return 0;
}
