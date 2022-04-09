from zoo.animal import Animal


class Cat(Animal):
    def __init__(self, type, age, weight, name):
        super().__init__(type, age, weight, name)
        print("Cat constructor called")

    def __str__(self):
        return f"This is {self.type} type animal {self.name}. It is a cat. It is {self.age} and weights {self.weight} kg."

    def speak(self):
        print(f"{self.name} says Meow")