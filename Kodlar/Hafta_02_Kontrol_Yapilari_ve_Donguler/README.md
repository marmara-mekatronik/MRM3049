# Hafta 2: Kontrol Yapıları, Karar Algoritmaları ve Döngüler - Kaynak Kodları

Bu dizin, **MRM3049 Nesne Yönelimli Programlama** dersi 2. Hafta sunumunda yer alan tüm temel, orta ve ileri seviye C++ kontrol ve döngü algoritmalarını içermektedir.

## Derleme ve Çalıştırma Yönergesi

Tüm kodlar **C++14** standardı temel alınarak hazırlanmıştır ve bağımsız olarak derlenebilir:

```bash
# Kod derleme:
g++ -std=c++14 -Wall -Wextra <dosya_adi>.cpp -o program

# Programı çalıştırma:
./program
```

## Kod Kataloğu

| No | Dosya Adı | Konu Başlığı | Odak / Mühendislik Senaryosu |
| :---: | :--- | :--- | :--- |
| **01** | `01_if_else_sicaklik_denetimi.cpp` | `if - else` | Robot gövde sıcaklık eşik kontrolü ve alarm |
| **02** | `02_else_if_merdiveni_motor_hizi.cpp` | `else if` Merdiveni | DC Motor PWM kademeleri ve hız seçimi |
| **03** | `03_mantiksal_operatorler_ve_kisa_devre.cpp` | Mantıksal Operatörler | Basınç/sıcaklık birleşik koşulu ve kısa devre |
| **04** | `04_ternary_uc_terimli_operator.cpp` | Üç Terimli Operatör (`?:`) | Pil durumu koşullu ataması ve min/max hesabı |
| **05** | `05_switch_case_robot_komut_terminali.cpp` | `switch-case` | W/S/A/D ve E-Stop komut yorumlayıcı terminal |
| **06** | `06_while_dongusu_sensor_filtreleme.cpp` | `while` Döngüsü | Sensör gürültü düşürme ve güvenli eşik bekleme |
| **07** | `07_do_while_kullanici_dogrulama.cpp` | `do-while` Döngüsü | Menü seçimi ve kullanıcı giriş doğrulama |
| **08** | `08_for_dongusu_sayac_ve_seri.cpp` | `for` Döngüsü | Sayaç kontrollü kümülatif seri toplamı |
| **09** | `09_range_based_for_modern_cpp.cpp` | Aralık Tabanlı `for` | C++11 ile dizi tarama ve PWM gerilim hesabı |
| **10** | `10_break_ve_continue_akisi.cpp` | `break` ve `continue` | Paket filtreleme ve acil durum hat kesici |
| **11** | `11_ic_ice_donguler_sensor_matrisi.cpp` | İç İçe Döngüler | 2B sensör grid taraması ve formatlı tablo |
| **12** | `12_alistirma_1_basamak_toplama.cpp` | Alıştırma 1 | Tamsayı basamak değerlerini ayrıştırma ve toplama |
| **13** | `13_alistirma_2_fizzbuzz_algoritmasi.cpp` | Alıştırma 2 | Klasik FizzBuzz mantığı ve kritik kontrol sırası |
| **14** | `14_alistirma_3_asal_sayi_kontrolu.cpp` | Alıştırma 3 | Asal sayı testi ve $\sqrt{N}$ döngü optimizasyonu |
| **15** | `15_mini_proje_mekatronik_terminali.cpp` | Mini Proje | Sonlu Durum Makinesi (FSM) tabanlı robot terminali |

---
*Marmara Üniversitesi Teknoloji Fakültesi Mekatronik Mühendisliği • Dr. Hüseyin Yüce*
