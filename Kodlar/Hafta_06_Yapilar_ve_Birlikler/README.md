# Hafta 6 - Yapılar, Birlikler ve Numaralandırmalar

Bu dizin, **Nesne Yönelimli Programlama** dersinin 6. hafta sunumunda yer alan tüm C++ kod örneklerini, vaka analizlerini ve mekatronik laboratuvar uygulamalarını içermektedir.

## Kod Dosyaları Listesi (22 Adet)

| No | Dosya Adı | Konu Başlığı | Odak / Mühendislik Senaryosu |
| :---: | :--- | :--- | :--- |
| **01** | `01_yapi_tanimlama_ve_uye_erisimi.cpp` | Yapı (`struct`) | Yapı bildirimi, nesne oluşturma ve nokta (`.`) operatörü |
| **02** | `02_yapi_dizileri_ve_donguler.cpp` | Yapı Dizileri | Robot eklem motorları telemetri tablosu ve döngülerle işleme |
| **03** | `03_ic_ice_yapilar_nested_structs.cpp` | İç İçe Yapılar | 3B koordinat yapısı ve robot kol eklem kompozisyonu |
| **04** | `04_yapi_isaretcileri_ve_ok_operatoru.cpp` | Yapı İşaretçileri | Ok (`->`) operatörü ve `const T*` / `const T&` ile aktarım |
| **05** | `05_dinamik_yapi_tahsisi_new_delete.cpp` | Dinamik Bellek | Heap üzerinde `new` / `delete` ile enkoder yapısı tahsisi |
| **06** | `06_struct_vs_class_ve_kapsulleme.cpp` | `struct` vs `class` | Varsayılan erişim (`public` vs `private`) ve veri gizleme |
| **07** | `07_yapilarda_kurucu_ve_yikici_metotlar.cpp` | Kurucu ve Yıkıcı | Üye ilklendirme listesi, yıkıcı metot ve RAII tampon yönetimi |
| **08** | `08_asiri_yuklenmis_kurucular.cpp` | Kurucu Aşırı Yükleme | Varsayılan, parametreli ve kopya kurucu (*Copy Constructor*) |
| **09** | `09_birlikler_union_ve_bellek_paylasimi.cpp` | Birlikler (`union`) | Ortak bellek alanı, tek aktif üye ilkesi ve `sizeof` analizi |
| **10** | `10_birlik_ile_bayt_donusumu_type_punning.cpp` | Bayt Ayrıştırma | 32-bit `float` sensör verisini UART/SPI için 4 bayta ayırma |
| **11** | `11_etiketli_birlik_tagged_union.cpp` | Etiketli Birlik | `enum class` tip etiketli güvenli anonim birlik tasarımı |
| **12** | `12_bit_alanlari_bitfields_donanim_kaydedici.cpp` | Bit Alanları | 1 baytlık (8-bit) motor kontrol kaydedicisi modelleme |
| **13** | `13_hibrit_kaydedici_birlik_ve_bit_alani.cpp` | Hibrit Kaydedici | Donanım portuna hem tam bayt hem tekil bit olarak erişim |
| **14** | `14_bellek_hizalama_ve_pragma_pack.cpp` | Bellek Hizalama | Doğal hizalama, dolgu baytları (*padding*) ve `#pragma pack(1)` |
| **15** | `15_enum_class_ve_tur_guvenligi.cpp` | `enum class` ve `using` | Kapsamlı numaralandırma, `: uint8_t` taban tür ve `using` |
| **16** | `16_mekatronik_can_bus_telemetri_cercevesi.cpp` | Vaka Analizi 1 | Standart 8-baytlık CAN Bus telemetri çerçevesi paketleme |
| **17** | `17_robot_durum_makinesi_fsm.cpp` | Vaka Analizi 2 | `enum class` ve `struct` tabanlı Robot Durum Makinesi (FSM) |
| **18** | `18_alistirma_1_imu_sensor_kalibrasyonu.cpp` | Alıştırma 1 | 6-Eksen IMU sensör paketi ve referansla jiroskop kalibrasyonu |
| **19** | `19_alistirma_2_16bit_adc_kaydedici.cpp` | Alıştırma 2 | 16-Bit ADC sonuç kaydedicisi hibrit `union` ve bit çözümleme |
| **20** | `20_endian_testi_ve_bayt_siralamasi.cpp` | Endian Mimarisi | `union` ile Little-Endian tespiti ve UART TX bayt sırası |
| **21** | `21_bitwise_islemler_ve_maskeleme.cpp` | Bitwise Operatörler | Bit Set, Bit Clear, Bit Toggle, Bit Check ve maskeleme |
| **22** | `22_bellek_fragmantasyonu_ve_padding.cpp` | Bellek Fragmantasyonu | Dahili parçalanma analizi, dolgu baytları ve sıralama kazancı |

## Derleme ve Çalıştırma

Herhangi bir kaynak kod dosyasını `g++` ile bağımsız olarak derleyebilirsiniz:

```bash
# Kod dizinine geçiş:
cd Kodlar/Hafta_06_Yapilar_ve_Birlikler

# Tekil dosya derleme ve çalıştırma:
g++ -std=c++14 -Wall -Wextra 16_mekatronik_can_bus_telemetri_cercevesi.cpp -o /tmp/program && /tmp/program
```
