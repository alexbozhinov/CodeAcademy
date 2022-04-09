from zoo.dog import Dog
from zoo.cat import Cat
from zoo.parrot import Parrot

dog = Dog("mammal", 2, 8, "Spike")
print(dog)
dog.speak()

cat = Cat("mammal", 5, 1.5, "Oscar")
print(cat)
cat.speak()

parrot = Parrot("bird", 4, 0.3, "Chick")
print(parrot)
parrot.speak()
