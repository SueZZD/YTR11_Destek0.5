def sensor_verisi(mesafe: float):
    if mesafe < 0.1:
        print(f"Hatali veri: ({mesafe:.2f})")
    elif mesafe > 30.0:
        print(f"({mesafe:.2f} m). Cok uzak, yoksay.")
    else:
        print(f"Nesne algilandi. Mesafe: {mesafe:.2f} metre.")


veri = float(input("Metre cinsinden bir mesafe degeri girin: "))
sensor_verisi(veri)
