#include <iostream>
#include <iomanip>
#include <cstdint>
#include <bitset>

int main() {
    std::cout << "====================================================\n";
    std::cout << "  C++ Hafta 6: Bitwise Mantik ve Donanim Maskeleme\n";
    std::cout << "====================================================\n\n";

    // 8-bit Donanım Kaydedicisi (Hardware Control Register)
    uint8_t REG = 0b00000000;
    std::cout << "Baslangic Kaydedici Degeri : 0b" << std::bitset<8>(REG) << "\n\n";

    // 1. BIT SET (1 Yapma) - OR (|) Operatörü
    // Bit 0: Motor Acik (1)
    REG |= (1 << 0);
    std::cout << "[1] BIT SET (Motor Ac - Bit 0 -> 1):\n";
    std::cout << "    Islem   : REG |= (1 << 0)\n";
    std::cout << "    Durum   : 0b" << std::bitset<8>(REG) << " (0x" << std::hex << (int)REG << std::dec << ")\n\n";

    // 2. COKLU BIT YAZMA (Maskeleme ve Kaydirma)
    // Bit 3..5: Hiz Kademesi (0..7 arasi kademe, ornegin kademe 5 = 101_2)
    // Once ilgili bitleri temizle (Clear maske: ~0b00111000 = ~0x38), sonra yeni degeri OR ile yaz
    REG = (REG & ~0x38) | (5 << 3);
    std::cout << "[2] COKLU BIT MASKELEME (Hiz Kademesi = 5 -> Bit 3..5):\n";
    std::cout << "    Islem   : REG = (REG & ~0x38) | (5 << 3)\n";
    std::cout << "    Durum   : 0b" << std::bitset<8>(REG) << "\n\n";

    // 3. BIT TOGGLE (Tersleme) - XOR (^) Operatörü
    // Bit 1: Yon (0: Geri, 1: Ileri). Su anda 0, tersleyince 1 olmali
    REG ^= (1 << 1);
    std::cout << "[3] BIT TOGGLE (Yon Degistir - Bit 1 Tersle):\n";
    std::cout << "    Islem   : REG ^= (1 << 1)\n";
    std::cout << "    Durum   : 0b" << std::bitset<8>(REG) << "\n\n";

    // 4. BIT CHECK (Durum Sorgulama) - AND (&) Operatörü
    bool motorCalisiyor = (REG & (1 << 0)) != 0;
    bool yonIleri       = (REG & (1 << 1)) != 0;
    uint8_t okunanHiz   = (REG >> 3) & 0x07; // 3 bit saga kaydir ve 0b111 ile maskele

    std::cout << "[4] BIT CHECK (Kaydedici Durum Sorgusu):\n";
    std::cout << "    Motor Durumu    : " << (motorCalisiyor ? "CALISIYOR" : "DURDU") << "\n";
    std::cout << "    Donus Yonu      : " << (yonIleri ? "ILERI" : "GERI") << "\n";
    std::cout << "    Hiz Kademesi    : " << (int)okunanHiz << " / 7\n\n";

    // 5. BIT CLEAR (0 Yapma) - AND NOT (& ~) Operatörü
    // Bit 0: Motoru Durdur
    REG &= ~(1 << 0);
    std::cout << "[5] BIT CLEAR (Motor Durdur - Bit 0 -> 0):\n";
    std::cout << "    Islem   : REG &= ~(1 << 0)\n";
    std::cout << "    Son Durum: 0b" << std::bitset<8>(REG) << "\n";

    return 0;
}
