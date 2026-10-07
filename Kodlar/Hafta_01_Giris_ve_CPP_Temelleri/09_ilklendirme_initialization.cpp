/**
 * @file 09_ilklendirme_initialization.cpp
 * @brief İlklendirme (Initialization)
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

// 1. Kopyalama ile İlklendirme (C Tarzı)
int a = 10;

// 2. Doğrudan (Direct) İlklendirme
int b(20);

// 3. Üniform / Liste İlklendirme (Modern C++11)
int c{30};

// Daralma (Narrowing) Koruması Farkı:
int d = 3.9;  // d = 3 olur (Veri sessizce kaybolur)

// int e{3.9}; 
// DERLEME HATASI! C++11 liste ilklendirme 
// veri kaybına izin vermez.
