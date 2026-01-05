#include <stdio.h>

void enYakinKoniKontrol() {
    int mesafe;
    int enYakin = 0;
    int sayac = 0;

    while (sayac < 5) {
        printf("%d. koninin mesafesini giriniz (mm): ", sayac + 1);
        scanf("%d", &mesafe);

        if (mesafe <= 0) {
            printf("Hatali veri! Mesafe pozitif olmali.\n");
            continue;
        }
        // İlk geçerli veriyi referans al
        if (sayac == 0) {
            enYakin = mesafe;
        }
        // Sonraki verilerle kıyasla
        else if (mesafe < enYakin) {
            enYakin = mesafe;
        }
        sayac++;
    }
  
    if (enYakin < 1500) {
        printf("KRITIK: Cok yakinda engel var! Yavasla. (En yakin: %d mm)\n", enYakin);
    } else {
        printf("Yol Acik: Devam et. (En yakin: %d mm)\n", enYakin);
    }
}

int main() {
    enYakinKoniKontrol();
    return 0;
}
