#include <iostream>

void sapmaKontrol(float sapma) {

    if (sapma > 1.0f || sapma < -1.0f) {
        std::cout << "ACIL DURUM: Pist Disi! Fren Yap. Sapma: "<< sapma << std::endl;
    }
    else if (sapma >= -0.1f && sapma <= 0.1f) {
        std::cout << "Yolunda: Duz Devam Et. Sapma: "<< sapma << std::endl;
    }
    else if (sapma > 0.1f) {
        std::cout << "Saga Kaydin: Sola Direksiyon Kir. Sapma: "<< sapma<< std::endl;
    }else { // sapma < -0.1
        std::cout << "Sola Kaydin: Saga Direksiyon Kir. Sapma: "<< sapma << std::endl;
    }
}

int main() {
    float sapmaDegeri;

    std::cout << "Serit merkezinden sapma degerini girin: ";
    std::cin >> sapmaDegeri;

    sapmaKontrol(sapmaDegeri);

    return 0;
}
