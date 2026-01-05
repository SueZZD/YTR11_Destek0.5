#include <iostream>

#define KONE_SAYISI 5
#define KRITIK_ESIK 1500

void enYakinKoniKontrol() {
    int mesafe;
    int enYakin = 0;

    for (int i = 0; i < KONE_SAYISI; i++) {
        std::cout << i + 1 << ". koninin mesafesini giriniz (mm): ";
        std::cin >> mesafe;

        if (mesafe <= 0) {
            std::cout << "Hatali veri! Mesafe pozitif olmali.\n";
            i--;
            continue;
        }

        if (i == 0) {
            enYakin = mesafe;
        } else if (mesafe < enYakin) {
            enYakin = mesafe;
        }
    }

    if (enYakin < KRITIK_ESIK) {
        std::cout << "KRITIK: Cok yakinda engel var! Yavasla.\n";
    } else {
        std::cout << "Yol Acik: Devam et. (En yakin: "
                  << enYakin << " mm)\n";
    }
}

int main() {
    enYakinKoniKontrol();
    return 0;
}
