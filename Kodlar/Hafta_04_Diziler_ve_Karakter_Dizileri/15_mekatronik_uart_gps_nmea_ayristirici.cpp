/**
 * @file 15_mekatronik_uart_gps_nmea_ayristirici.cpp
 * @brief Mekatronik Uygulama: UART seri porttan gelen GPS NMEA-0183 ($GPRMC) cümlelerinin ayrıştırılması
 * @author Dr. Hüseyin Yüce
 *
 * Nesne Yönelimli Programlama - Hafta 4
 * Marmara Üniversitesi Mekatronik Mühendisliği
 */

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

// Metni belirli bir ayrac karakterine gore parcalayan yardimci fonksiyon
std::vector<std::string> metinParcala(const std::string& metin, char ayrac) {
    std::vector<std::string> parcalar;
    std::stringstream ss(metin);
    std::string parca;
    while (std::getline(ss, parca, ayrac)) {
        parcalar.push_back(parca);
    }
    return parcalar;
}

int main() {
    // UART portundan gelen ornek standart NMEA $GPRMC paketi
    // Format: $GPRMC,UTC_Zaman,Durum(A=Gecerli,V=Gecersiz),Enlem,K/G,Boylam,D/B,Hiz(knot),Tarih
    std::string nmeaPaketi = "$GPRMC,123519.00,A,4101.428,N,02858.912,E,022.4,201026,,,A*73";

    std::cout << "--- GPS NMEA-0183 ($GPRMC) Telemetri Ayrıştırıcı ---\n";
    std::cout << "Gelen Ham UART Verisi:\n" << nmeaPaketi << "\n\n";

    // 1. Baslangic belirteci kontrolu
    if (nmeaPaketi.rfind("$GPRMC", 0) != 0) {
        std::cerr << "HATA: Gecersiz NMEA paketi! Beklenen: $GPRMC\n";
        return 1;
    }

    // 2. Virgullere gore paket alanlarini ayristirma
    std::vector<std::string> alanlar = metinParcala(nmeaPaketi, ',');

    if (alanlar.size() >= 10) {
        std::string zaman = alanlar[1];
        std::string durum = alanlar[2];
        std::string enlem = alanlar[3] + " " + alanlar[4];
        std::string boylam = alanlar[5] + " " + alanlar[6];
        std::string hizKnot = alanlar[7];
        std::string tarih = alanlar[8];

        std::cout << "--- Ayristirilan Telemetri Verileri ---\n";
        std::cout << "UTC Zaman       : " << zaman.substr(0, 2) << ":" 
                  << zaman.substr(2, 2) << ":" << zaman.substr(4, 2) << "\n";
        std::cout << "GPS Durumu      : " << (durum == "A" ? "Gecerli (Fix Var)" : "Gecersiz (Uydu Yok)") << "\n";
        std::cout << "Enlem (Lat)     : " << enlem << "\n";
        std::cout << "Boylam (Lon)    : " << boylam << "\n";

        // Knot degerini km/h'ye donusturme (1 knot = 1.852 km/h)
        try {
            double knot = std::stod(hizKnot);
            double kmh = knot * 1.852;
            std::cout << "Hiz             : " << std::fixed << std::setprecision(1) 
                      << knot << " knot (" << kmh << " km/h)\n";
        } catch (...) {
            std::cout << "Hiz degeri sayiya donusturulemedi.\n";
        }

        std::cout << "Tarih (GGAAYY)  : " << tarih.substr(0, 2) << "/" 
                  << tarih.substr(2, 2) << "/20" << tarih.substr(4, 2) << "\n";
    } else {
        std::cerr << "Eksik NMEA paketi alindi!\n";
    }

    return 0;
}
