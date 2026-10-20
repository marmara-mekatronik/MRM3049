# Hafta 6 - Yapılar, Birlikler ve Numaralandırmalar

Bu dizin, **Nesne Yönelimli Programlama** dersinin 6. hafta sunumunda yer alan tüm C++ kod örneklerini ve mekatronik laboratuvar uygulamalarını içermektedir.

## Kod Dosyaları Listesi (16 Adet)

- **`01_yapi_tanimlama_ve_uye_erisimi.cpp`**: Yapı (`struct`) bildirimi, üye değişkenler, nesne oluşturma ve doğrudan erişim (`.`) operatörü.
- **`02_yapi_dizileri_ve_donguler.cpp`**: Yapı dizileri (*Array of Structs*), robot eklem motorları telemetri tablosu ve döngülerle toplu veri işleme.
- **`03_ic_ice_yapilar_nested_structs.cpp`**: İç içe yapılar (*Nested Structs*), 3B koordinat yapısı ve robot uçbirim (*End-Effector*) kinematik modelleme.
- **`04_yapi_isaretcileri_ve_ok_operatoru.cpp`**: Yapı işaretçileri, ok (`->`) operatörü, batarya yönetim sistemi ve fonksiyona referansla aktarım.
- **`05_dinamik_yapi_tahsisi_new_delete.cpp`**: Heap üzerinde `new` ve `delete` ile dinamik yapı ve yapı dizisi tahsisi, `nullptr` sıfırlaması.
- **`06_struct_vs_class_ve_kapsulleme.cpp`**: `struct` ve `class` arasındaki varsayılan erişim farkı (`public` vs `private`), veri gizleme ve kapsülleme.
- **`07_yapilarda_kurucu_ve_yikici_metotlar.cpp`**: Yapılarda kurucu (*Constructor*) ve yıkıcı (*Destructor*) metotlar, dinamik bellek yönetimi ve RAII ilkesi.
- **`08_asiri_yuklenmis_kurucular.cpp`**: Aşırı yüklenmiş kurucular: Varsayılan kurucu, parametreli kurucu ve kopya kurucu (*Copy Constructor*).
- **`09_birlikler_union_ve_bellek_paylasimi.cpp`**: Birlikler (`union`), ortak bellek alanı, bellek çakışması, tek aktif üye ilkesi ve `sizeof` hesabı.
- **`10_birlik_ile_bayt_donusumu_type_punning.cpp`**: Birlikler ile *Type Punning*: 32-bit kayan noktalı (`float`) veriyi seri hat için 4 ham bayta parçalama ve birleştirme.
- **`11_etiketli_birlik_tagged_union.cpp`**: Etiketli Birlik (*Tagged / Discriminated Union*) mimarisi ile `enum class` etiketli güvenli polimorfik paket yönetimi.
- **`12_bit_alanlari_bitfields_donanim_kaydedici.cpp`**: Bit Alanları (*Bit-fields*) ile 1 baytlık alanda motor kontrol kaydedicisi (yön, fren, hız, hata) modelleme.
- **`13_hibrit_kaydedici_birlik_ve_bit_alani.cpp`**: Birlik ve bit alanı hibrit mimarisi: Donanım portuna hem tek ham bayt hem de tekil bit bayrakları ile eşzamanlı erişim.
- **`14_bellek_hizalama_ve_pragma_pack.cpp`**: Doğal bellek hizalama (*Memory Alignment*), dolgu baytları (*Padding*), üye sıralama etkisi ve `#pragma pack(1)`.
- **`15_enum_class_ve_tur_guvenligi.cpp`**: Geleneksel `enum` vs modern C++11 `enum class` (*Scoped Enum*), taban tür belirleme (`uint8_t`) ve `using` takma adları.
- **`16_mekatronik_can_bus_telemetri_cercevesi.cpp`**: Mekatronik Sentez: Standart 8 baytlık CAN Bus telemetri veri çerçevesi paketleme ve çözümleme mimarisi.

## Derleme ve Çalıştırma

Herhangi bir kaynak kod dosyasını g++ ile bağımsız olarak derleyebilirsiniz:

```bash
# Kod dizinine geçiş:
cd Kodlar/Hafta_06_Yapilar_ve_Birlikler

# CAN Bus mekatronik telemetri örneğini derleme:
g++ -std=c++14 -Wall -Wextra 16_mekatronik_can_bus_telemetri_cercevesi.cpp -o program
./program

# Bellek hizalama ve paketleme örneğini derleme:
g++ -std=c++14 -Wall -Wextra 14_bellek_hizalama_ve_pragma_pack.cpp -o program && ./program
```
