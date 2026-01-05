MIN_DIST = 0.1
MAX_DIST = 30.0

try:
    mesafe = float(input("Mesafe girin: "))
    
    if mesafe < MIN_DIST:
        print("PARAZIT!")
    elif mesafe > MAX_DIST:
        print("COK UZAK")
    else:
        print(f"OK: {mesafe:.2f} m")
except ValueError:
    print("HATA: Gecersiz girdi!")
