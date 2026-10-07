/**
 * @file 17_using_namespace_std_neden_riskli.cpp
 * @brief using namespace std; Neden Riskli?
 * Ders: Nesne Yönelimli Programlama (C++)
 * Konu: Hafta 1 - OOP Vizyonu ve C++ Temelleri
 * Öğretim Üyesi: Dr. Hüseyin Yüce
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <algorithm> // std::count burada tanımlı
using namespace std; // TÜM std isimleri global oldu!

// Kendi tanımladığımız bir değişken:
int count = 100;

int main() {
    // cout << count << endl;
    // DERLEME HATASI: 'count' belirsiz (ambiguous)!
    // Hem global ::count değişkeni hem de std::count
    // algoritması görünür. Derleyici hangisini kastettiğimizi bilemez.
    
    return 0;
}
