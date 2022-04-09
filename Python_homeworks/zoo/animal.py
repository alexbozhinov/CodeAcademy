class Animal:
    ANIMAL_TYPE = ("mammal", "bird")

    def __init__(self, type, age, weight, name):
        self.type = type
        self.age = age
        self.weight = weight
        self.name = name

    def __str__(self):
        return f"This is {self.type} type animal {self.name}. It is {self.age} and weights {self.weight} kg."

    def speak(self):
        print(f"{self.name} says something")


