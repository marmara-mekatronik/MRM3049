/**
 * @file 06_struct_vs_class_ve_kapsulleme.cpp
 * @brief struct vs class karşılaştırması: Varsayılan erişim belirleyicisi (public vs private)
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 6
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

// 1. struct: Tum uyeler varsayilan olarak PUBLIC'tir
struct MotorStruct {
    int pwmDegeri; // Disaridan dogrudan erisilebilir ve degistirilebilir
    void bilgileriGoster() const {
        std::cout << "[struct] PWM Degeri: " << pwmDegeri << "\n";
    }
};

// 2. class: Tum uyeler varsayilan olarak PRIVATE'tir
class MotorClass {
    int pwmDegeri; // Disaridan dogrudan ERISILEMEZ (Veri gizleme)
public:
    // Guvenli getter ve setter metotlari
    void setPwm(int pwm) {
        if (pwm >= 0 && pwm <= 255) {
            pwmDegeri = pwm;
        } else {
            std::cerr << "HATA: Gecersiz PWM degeri (" << pwm << ")! [0 - 255] olmali.\n";
            pwmDegeri = 0;
        }
    }

    int getPwm() const {
        return pwmDegeri;
    }
};

int main() {
    // struct kullanimi: Dogrudan atama
    MotorStruct ms;
    ms.pwmDegeri = 180; // Serbest erisim
    ms.bilgileriGoster();

    // class kullanimi: Kapsulleme ile sinir denetimi
    MotorClass mc;
    // mc.pwmDegeri = 300; // DERLEME HATASI! 'pwmDegeri' private bir uyedir.
    mc.setPwm(220); // Guvenli setter cagrisi
    std::cout << "[class] Kapsullenmis PWM: " << mc.getPwm() << "\n";

    mc.setPwm(500); // Gecersiz deger sinir denetiminde engellenir
    std::cout << "[class] Hatali Atama Sonrasi PWM: " << mc.getPwm() << "\n";

    return 0;
}
