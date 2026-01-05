KONE_SAYISI = 5
KRITIK_ESIK = 1500

def en_yakin_koni_kontrol():
    mesafeler = []

    while len(mesafeler) < KONE_SAYISI:
        girilen = int(input(f"{len(mesafeler)+1}. koninin mesafesini giriniz (mm): "))

        if girilen <= 0:
            print("Hatali veri! Mesafe pozitif olmali.")
            continue

        mesafeler.append(girilen)

    en_yakin = min(mesafeler)

    if en_yakin < KRITIK_ESIK:
        print("KRITIK: Cok yakinda engel var! Yavasla.")
    else:
        print(f"Yol Acik: Devam et. (En yakin: {en_yakin} mm)")

en_yakin_koni_kontrol()
