#include <stdio.h>

#define KONE_SAYISI 5
#define KRITIK_ESIK 1500

void enYakinKoniKontrol() {
    int mesafe;
    int enYakin = 0;

    for (int i = 0; i < KONE_SAYISI; i++) {
        printf("%d. koninin mesafesini giriniz (mm): ", i + 1);
        scanf("%d", &mesafe);

        if (mesafe <= 0) {
            printf("Hatali veri! Mesafe pozitif olmali.\n");
            i--;              // tekrar aynı index
            continue;
        }

        if (i == 0) {
            enYakin = mesafe;
        } else if (mesafe < enYakin) {
            enYakin = mesafe;
        }
    }

    if (enYakin < KRITIK_ESIK) {
        printf("KRITIK: Cok yakinda engel var! Yavasla.\n");
    } else {
        printf("Yol Acik: Devam et. (En yakin: %d mm)\n", enYakin);
    }
}

int main() {
    enYakinKoniKontrol();
    return 0;
}
