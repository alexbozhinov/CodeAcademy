from headphone import Headphone

headphone1 = Headphone("wired", "Philips", "W22SD265", 69.99)
headphone2 = Headphone("wireless-bluetooth", "Panasonic", "WB565FFS5", 101.99)

shop_items = [headphone1, headphone2]

for headphone in shop_items:
    headphone.switch_on()
    headphone.sound()
    headphone.switch_off()
    print(headphone)

invalid_headphone = Headphone("wireless", "brand", "model", 0.00)
