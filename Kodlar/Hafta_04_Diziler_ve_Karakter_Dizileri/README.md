# Hafta 4 - Diziler, Karakter Dizileri ve Dinamik Vektörler

Bu dizin, **Nesne Yönelimli Programlama** dersinin 4. hafta sunumunda yer alan tüm C++ kod örneklerini ve mekatronik laboratuvar uygulamalarını içermektedir.

## Kod Dosyaları Listesi (15 Adet)

- **`01_tek_boyutlu_diziler_ve_ilklendirme.cpp`**: Tek boyutlu dizilerin bildirimi, bellekte ardışıl yerleşimi, tam/kısmi/sıfırla ilklendirme ve bellek boyutu (`sizeof`).
- **`02_dizi_indisleme_ve_sinir_asimi.cpp`**: İndisleme sınırları (`0` ile `N-1`), sınır aşımı (*out-of-bounds*) riskleri, tanımsız davranış (*UB*) ve savunmacı sınır denetimi.
- **`03_aralik_tabanli_for_dongusu.cpp`**: C++11 Aralık tabanlı `for` döngüsü (*Range-based for*), `const auto&` ile bellek tasarruflu salt okunur erişim ve `auto&` ile eleman güncelleme.
- **`04_fonksiyonlara_dizi_aktarimi_ve_decaying.cpp`**: Dizilerin fonksiyona aktarımı, dizinin işaretçiye bozunması (*Array-to-Pointer Decay*), `sizeof` yanılgısı ve boyut parametresi zorunluluğu.
- **`05_cok_boyutlu_diziler_ve_row_major.cpp`**: İki boyutlu diziler (matrisler), bellekte Satır Öncelikli Düzen (*Row-Major Order*) ve fonksiyona aktarım kuralları.
- **`06_karakter_dizileri_c_strings.cpp`**: C-tarzı karakter dizileri (`char[]`), null sonlandırıcı karakter (`'\0'`), `<cstring>` fonksiyonları (`strlen`, `strcpy`, `strcat`, `strcmp`) ve bellek taşması tehlikeleri.
- **`07_modern_string_std_string.cpp`**: Modern C++ `std::string` sınıfı, dinamik bellek yönetimi, `length()`, `c_str()`, `operator+` ve doğrudan `==` ile eşitlik denetimi.
- **`08_string_metin_arama_ve_parcalama.cpp`**: `std::string` ile arama (`find()`, `string::npos`), alt metin çıkarma (`substr()`) ve `std::stringstream` ile virgülle ayrılmış paket parçalama (*tokenizing*).
- **`09_sabit_boyutlu_dizi_std_array.cpp`**: Modern C++11 `std::array` konteyneri, sıfır maliyetli soyutlama, bozulmayan boyut bilgisi ve `.at()` metodu ile sınır ihlali istisnası (`std::out_of_range`).
- **`10_dinamik_vektor_std_vector.cpp`**: Dinamik boyutlu dizi `std::vector`, `push_back()`, `pop_back()`, `size()` ile `capacity()` farkı ve otomatik bellek tahsisi (*reallocation*).
- **`11_arama_algoritmalari_lineer_ve_ikili.cpp`**: Doğrusal Arama (*Linear Search*, $O(N)$) ve İkili Arama (*Binary Search*, $O(\log N)$) algoritmalarının karşılaştırmalı analizi.
- **`12_kabarcik_siralama_bubble_sort.cpp`**: Kabarcık Sıralama (*Bubble Sort*, $O(N^2)$) algoritması, komşu takası (`std::swap`) ve bayrak denetimli erken sonlandırma optimizasyonu.
- **`13_mekatronik_adc_sensor_taramasi.cpp`**: Mekatronik Uygulama: 8 kanallı ADC sensör dizisinin taranması, gerilim dönüşümü ve aşırı yük/sıcaklık eşik alarmı kontrolü.
- **`14_mekatronik_kayan_ortalama_filtresi.cpp`**: Mekatronik Uygulama: Gürültülü ultrasonik mesafe sensörü telemetrisi üzerinde dairesel tamponlu Kayan Ortalama Filtresi (*Moving Average Filter*).
- **`15_mekatronik_uart_gps_nmea_ayristirici.cpp`**: Mekatronik Uygulama: UART seri porttan gelen GPS NMEA-0183 (`$GPRMC`) telemetri paketlerinin `std::string` metotları ve vektör ile ayrıştırılması.

## Derleme ve Çalıştırma

Herhangi bir kaynak kod dosyasını g++ ile bağımsız olarak derleyebilirsiniz:

```bash
# Kod dizinine geçiş:
cd Kodlar/Hafta_04_Diziler_ve_Karakter_Dizileri

# Derleme:
g++ -std=c++14 -Wall -Wextra 14_mekatronik_kayan_ortalama_filtresi.cpp -o program
./program

# Modern C++ std::array veya std::vector örneğini derleme:
g++ -std=c++14 -Wall -Wextra 09_sabit_boyutlu_dizi_std_array.cpp -o program && ./program
```
