/**
 * @file 08_dinamik_tek_degisken_new_delete.cpp
 * @brief Heap üzerinde new ve delete ile tek değişken tahsisi ve güvenli sıfırlama
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 5
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>

int main() {
    // 1. Heap üzerinde dinamik bir tamsayı alanı açıp 100 değeriyle ilklendirme
    int* ptr = new int(100);

    std::cout << "--- Dinamik Bellek Tahsisi ---\n";
    std::cout << "Heap Alanı Başlangıç Adresi : " << ptr << "\n";
    std::cout << "Heap Alanındaki Değer        : " << *ptr << "\n";

    // Değeri güncelleme
    *ptr = 450;
    std::cout << "Güncellenen Heap Değeri      : " << *ptr << "\n\n";

    // 2. Belleği Serbest Bırakma (İşletim Sistemine İade)
    delete ptr;

    // 3. Güvenli Silme Deseni: Sarkan göstericiyi (dangling pointer) engelleme
    ptr = nullptr;

    std::cout << "Bellek başarıyla serbest bırakıldı ve ptr = nullptr yapıldı.\n";

    // delete nullptr çağırmak güvenlidir, tanımsız davranışa yol açmaz
    delete ptr;

    return 0;
}
