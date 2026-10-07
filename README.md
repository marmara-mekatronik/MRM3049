# MRM3049 - Nesne Yönelimli Programlama (C++)

**Marmara Üniversitesi Teknoloji Fakültesi • Mekatronik Mühendisliği Bölümü**  
**Ders Sorumlusu:** Dr. Hüseyin Yüce

Bu depo, MRM3049 Nesne Yönelimli Programlama dersi kapsamında paylaşılan haftalık ders sunumlarının PDF kopyalarını, örnek C++ kaynak kodlarını ve laboratuvar alıştırmalarını içermektedir.

---

## Dizin Yapısı

```
.
├── Ders_Notlari/      # Haftalık ders sunumlarının PDF versiyonları
│   └── Hafta_01_Giris_ve_CPP_Temelleri.pdf
├── Kodlar/            # Haftalık derlenebilir bağımsız C++ örnekleri
│   └── Hafta_01_Giris_ve_CPP_Temelleri/
│       ├── 01_sinif_class_nedir.cpp ... 28_alistirma_5_*.cpp
│       └── README.md
├── LICENSE            # Lisans belgesi
└── README.md          # Ders ve depo rehberi
```

---

## C++ Derleme ve Çalıştırma Yönergeleri

Tüm kod örnekleri **C++14** standardı temel alınarak hazırlanmıştır. Kodları terminalden derlemek için aşağıdaki komut kalıbı önerilir:

```bash
# Tekil C++ kaynak kodunu derleme:
g++ -std=c++14 -Wall -Wextra <dosya_adi>.cpp -o program

# Programı çalıştırma:
./program
```

* `-Wall`: Tüm temel derleyici uyarılarını (*All Warnings*) açar.
* `-Wextra`: Ekstra titiz denetimleri etkinleştirir.
* `-std=c++14`: ISO C++14 standardını zorunlu kılar.

---

## Değerlendirme ve Akademik Dürüstlük İlkeleri

* **Ödev Politikası:** Ders kapsamında ev ödevi **verilmemektedir**. Notlandırma; haftalık laboratuvar içi canlı kodlama uygulamaları (2 saat) ve dönem içi/sonu sınavları (Vize / Final / Bütünleme) üzerinden yürütülür.
* **Özgünlük İlkesi:** Marmara Üniversitesi Akademik Dürüstlük İlkeleri gereğince laboratuvarlarda ve sınavlarda yazılan tüm kodların öğrencinin kendisine ait olması zorunludur.
