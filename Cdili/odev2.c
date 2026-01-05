#include <stdio.h>

void sapmA(float sapma) {

    if (sapma > 1.0f || sapma < -1.0f) {
        printf("ACIL DURUM: Pist Disi! Fren Yap. (Sapma: %.2f m)\n", sapma);
    }
    else if (sapma >= -0.1f && sapma <= 0.1f) {
        printf("Yolunda: Duz Devam Et. (Sapma: %.2f m)\n", sapma);
    }
    else if (sapma > 0.1f) {
        printf("Saga Kaydin: Sola Direksiyon Kir. (Sapma: %.2f m)\n", sapma);
    }else { // sapma < -0.1
        printf("Sola Kaydin: Saga Direksiyon Kir. (Sapma: %.2f m)\n", sapma);
    }
}

int main() {
    float sapmaDegeri;

    printf("Metre cinsinden mesafe degeri giriniz: ");
    scanf("%f", &sapmaDegeri);

    sapmA(sapmaDegeri);

    return 0;
}
