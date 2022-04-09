class Headphone:
    HEADPHONE_TYPE = ("wired", "wireless-bluetooth")
    HEADPHONE_BRANDS = ("Philips", "Panasonic")
    is_connected = False

    def __init__(self, headphone_type: str, brand: str, model: str, price: float):
        self.headphone_type = self.validate_headphone_type(headphone_type)
        self.brand = self.validate_headphone_brand(brand)
        self.model = model
        self.price = price

    def validate_headphone_type(self, headphone_type):
        if headphone_type not in self.HEADPHONE_TYPE:
            raise ValueError(f"Headphone type '{headphone_type}' is not a valid one!")
        return headphone_type

    def validate_headphone_brand(self, brand):
        if brand not in self.HEADPHONE_BRANDS:
            raise ValueError(f"Headphone brand '{brand}' is not a valid one!")
        return brand

    def switch_on(self):
        self.is_connected = True
        if self.headphone_type == "wired":
            print("Headphones plugged into the device")
        else:
            print("Headphones are connected with the device")

    def sound(self):
        if self.is_headphone_connected():
            print(f"Headphones {self.brand} - {self.model} emits sound")
        else:
            print("Connection problems...")

    def is_headphone_connected(self):
        if self.is_connected:
            return True
        else:
            return False

    def switch_off(self):
        if self.headphone_type == "wired":
            print("Headphones plugged out of the device")
        else:
            print("Headphones are disconnected from the device")

    def __str__(self):
        return f"{self.headphone_type} headphones {self.brand}, model - {self.model} which cost {self.price}$"
