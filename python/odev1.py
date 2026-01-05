#include <stdio.h>

#define MIN_DIST 0.1f
#define MAX_DIST 30.0f

int main() {
    float mesafe;
    printf("Mesafe girin: ");
    if (scanf("%f", &mesafe) != 1) return 1; // Girdi kontrolü

    if (mesafe < MIN_DIST) printf("PARAZIT!\n");
    else if (mesafe > MAX_DIST) printf("COK UZAK\n");
    else printf("OK: %.2f m\n", mesafe);
    
    return 0;
}
