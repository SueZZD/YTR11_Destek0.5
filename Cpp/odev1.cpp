#include <iostream>

void sensorVerisi(float mesafe) {
    if (mesafe < 0.1f) {
        std::cout << "Hatali veri: " ;
    }
    else if (mesafe > 30.0f) {
        std::cout << "Cok uzak, yoksay. " ;
    }else {
        std::cout << "Nesne algilandi. Mesafe: " << mesafe << std::endl;
    }
}

int main() {
    float veri;

    std::cout << "Metre cinsinden bir mesafe degeri girin: ";
    std::cin >> veri;
    sensorVerisi(veri);
  
    return 0;
}
