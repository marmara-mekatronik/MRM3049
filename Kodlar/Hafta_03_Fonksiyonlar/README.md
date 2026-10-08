# Hafta 03: Fonksiyonlar, Bellek Mimarisi ve Modülerlik - Kaynak Kodları

Bu dizin, **Nesne Yönelimli Programlama** dersi 3. hafta sunumunda yer alan tüm C++ kod örneklerini, bellek mimarisi gösterimlerini ve modüler proje tasarımlarını içerir.

## Dosya Kataloğu

| Dosya | Açıklama |
| :--- | :--- |
| `01_fonksiyon_temelleri.cpp` | Fonksiyon yapısı, geri dönüş tipleri (`void` vs değer) ve guard clause |
| `02_fonksiyon_prototipi.cpp` | Fonksiyon bildirimi (deklarasyon) ve gövde (tanım) ayrımı |
| `03_pass_by_value.cpp` | Değerle aktarım (*pass by value*) ve yerel değişken kopyalanması |
| `04_pass_by_pointer.cpp` | İşaretçiyle aktarım (*pass by pointer*), deferans ve null kontrolü |
| `05_pass_by_reference.cpp` | Referansla aktarım (*pass by reference*), takma ad (*alias*) ve swap |
| `06_const_reference.cpp` | `const T&` ile sıfır kopyalama ve salt-okunur veri güvenliği |
| `07_dizilerin_aktarimi.cpp` | Dizi bozunması (*array decay*) ve boyut parametresi zorunluluğu |
| `08_varsayilan_argumanlar.cpp` | Varsayılan argümanlar (*default arguments*) ve sağdan-sola kuralı |
| `09_fonksiyon_asiri_yukleme.cpp` | Fonksiyon aşırı yükleme (*function overloading*) ve imza kuralları |
| `10_inline_fonksiyonlar_ve_makro.cpp` | `inline` vs `#define` makroları: Yan etki ve tip güvenliği analizi |
| `11_ozyineleme_faktoriyel.cpp` | Özyineleme (*recursion*), taban durum ve stack çerçevesi analizi |
| `12_ozyineleme_fibonacci.cpp` | Özyinelemeli Fibonacci ve zaman karmaşıklığı analizi |
| `13_moduler_kinematik/` | Modüler robot kolu açı kütüphanesi (`.h`, `.cpp`, `main.cpp`) |
| `14_sensor_alarm_sistemi/` | Modüler sensör telemetri ve alarm modülü (`.h`, `.cpp`, `main.cpp`) |
| `15_robot_3eksen_konumlandirma.cpp` | Laboratuvar Alıştırması: Kartezyen robot 3 eksen konumlandırma |

## Derleme ve Çalıştırma

### Bağımsız Programları Derleme
```bash
g++ -std=c++14 -Wall -Wextra 01_fonksiyon_temelleri.cpp -o 01_fonksiyon
./01_fonksiyon
```

### Modüler Projeleri Derleme (Örnek: `13_moduler_kinematik`)
```bash
cd 13_moduler_kinematik
g++ -std=c++14 -Wall -Wextra main.cpp robot_kinematik.cpp -o robot_kinematik
./robot_kinematik
```
