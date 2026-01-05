#include <stdio.h>

/**
 * GÖREV 1: Perception Filtreleme Sistemi
 * Amaç: Sensörden gelen veriyi anlamlı bir aralığa oturtmak.
 */

// Algoritma mantığını ayrı bir fonksiyonda tutmak her zaman iyidir.
void sensorVerisi(float mesafe) {
    

    if (mesafe < 0.1f) {
        printf("Hatali veri: (%.2f)\n", mesafe);
    }
    else if (mesafe > 30.0f) {
        printf("(%.2f m). Cok uzak, yoksay.\n", mesafe);
    }else {
        printf("Nesne algilandi. Mesafe: %.2f metre.", mesafe);
    }
}

int main() {
    float veri;

    printf("Metre cinsinden bir mesafe degeri girin: ");
    scanf("%f", &veri);

    sensorVerisi(veri);

    return 0;
}

