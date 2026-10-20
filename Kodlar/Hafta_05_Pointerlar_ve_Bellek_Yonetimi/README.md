# Hafta 5 - Pointerlar ve Dinamik Bellek Yönetimi

Bu dizin, **Nesne Yönelimli Programlama** dersinin 5. hafta sunumunda yer alan tüm C++ kod örneklerini ve mekatronik laboratuvar uygulamalarını içermektedir.

## Kod Dosyaları Listesi (12 Adet)

- **`01_isaretci_tanimlama_ve_deferans.cpp`**: İşaretçi (pointer) kavramı, adres (`&`) ve deferans (`*`) operatörleri, işaretçi üzerinden değer güncelleme.
- **`02_nullptr_guvenligi_ve_denetimi.cpp`**: İlklendirilmemiş işaretçi (wild pointer) riskleri, modern C++ `nullptr` standardı ve savunmacı fonksiyon denetimi.
- **`03_sabitler_ve_gostericiler.cpp`**: `const` ve gösterici kombinasyonları (`const int*`, `int* const`, `const int* const`) ve derleme kuralları.
- **`04_jenerik_gosterici_void_pointer.cpp`**: Tip-bağımsız jenerik işaretçi (`void*`) mimarisi ve `static_cast` ile güvenli tür dönüşümü.
- **`05_isaretciye_isaretci_pointer_to_pointer.cpp`**: Göstericiye gösterici (`int**`) mekanizması, iki kademeli adresleme ve uzaktan değer güncelleme.
- **`06_isaretci_aritmetigi_ve_dizi_taramasi.cpp`**: İşaretçi aritmetiği matematiği ($ptr \pm n \times sizeof(T)$), dizi-işaretçi denkliği ve gezici işaretçi.
- **`07_fonksiyon_parametre_aktarimi_karsilastirma.cpp`**: Değerle aktarım (*pass-by-value*), işaretçiyle aktarım (*pass-by-pointer*) ve referansla aktarım (*pass-by-reference*).
- **`08_dinamik_tek_degisken_new_delete.cpp`**: Heap üzerinde `new` ve `delete` ile tek değişken tahsisi ve `ptr = nullptr;` güvenli silme deseni.
- **`09_dinamik_dizi_new_delete_array.cpp`**: Çalışma zamanında belirlenen boyutta dinamik dizi (`new[]` ve `delete[]`) yönetimi.
- **`10_iki_boyutlu_dinamik_matris.cpp`**: `int**` ile iki boyutlu dinamik matris oluşturma ve ters sıra ile güvenli bellek temizliği.
- **`11_kritik_bellek_hatalari_ve_onlemler.cpp`**: Bellek sızıntısı (*memory leak*), sarkan gösterici (*dangling pointer*), çift serbest bırakma (*double-free*) ve önlemleri.
- **`12_mekatronik_dairesel_telemetri_tamponu.cpp`**: Dinamik dairesel telemetri tamponu (*Ring Buffer*), işaretçi aritmetiği ile hareketli ortalama filtresi.

## Derleme ve Çalıştırma

Herhangi bir kaynak kod dosyasını g++ ile bağımsız olarak derleyebilirsiniz:

```bash
# Kod dizinine geçiş:
cd Kodlar/Hafta_05_Pointerlar_ve_Bellek_Yonetimi

# Derleme:
g++ -std=c++14 -Wall 12_mekatronik_dairesel_telemetri_tamponu.cpp -o program
./program

# Bellek kaçaklarını AddressSanitizer ile denetleme:
g++ -std=c++14 -fsanitize=address -g 08_dinamik_tek_degisken_new_delete.cpp -o program && ./program
```
