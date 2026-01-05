def sapma_kontrol(sapma: float):
    if sapma > 1.0 or sapma < -1.0:
        print(f"ACIL DURUM: Pist Disi! Fren Yap. (Sapma: {sapma:.2f} m)")
    elif -0.1 <= sapma <= 0.1:
        print(f"Yolunda: Duz Devam Et. (Sapma: {sapma:.2f} m)")
    elif sapma > 0.1:
        print(f"Saga Kaydin: Sola Direksiyon Kir. (Sapma: {sapma:.2f} m)")
    else:
        print(f"Sola Kaydin: Saga Direksiyon Kir. (Sapma: {sapma:.2f} m)")


sapma_degeri = float(input("Metre cinsinden sapma degerini giriniz: "))
sapma_kontrol(sapma_degeri)
