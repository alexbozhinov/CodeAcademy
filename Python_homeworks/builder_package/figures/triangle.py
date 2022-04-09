from builder_package.figures.side import Side


class Triangle:
    def __init__(self, a: int, b: int, c: int):
        self.a = Side(a)
        self.b = Side(b)
        self.c = Side(c)

    def __new__(cls, *args, **kwargs):
        a = args.__getitem__(0)
        b = args.__getitem__(1)
        c = args.__getitem__(2)

        if a + b > c and b + c > a and a + c > b:
            return super().__new__(cls)
        else:
            print("The sides of the triangle are not valid!")
            return None

    def perimeter(self):
        return self.a.length + self.b.length + self.c.length

    def area(self):
        p = int(self.perimeter() / 2)
        return (p * (p - self.a.length) * (p - self.b.length) * (p - self.c.length)) ** 0.5

    def type(self):
        if self.__is_equilateral():
            return "equilateral"
        elif self.__is_multifaceted():
            return "multifaceted"
        else:
            return "isosceles"

    def __is_equilateral(self):
        if self.a.length == self.b.length == self.c.length:
            return True
        return False

    def __is_multifaceted(self):
        if self.a.length != self.b.length != self.c.length:
            return True
        return False

    def __str__(self):
        return f"a = {self.a.length}, b = {self.b.length}, c = {self.c.length}; P = {self.perimeter()}," \
               f" S = {self.area()}"

    def __repr__(self):
        return repr(f"This is {self.type()} triangle with sides: AB = {self.c.length} BC = {self.a.length},"
                    f" AC = {self.b.length}; the perimeter P = {self.perimeter()} and area S = {self.area()}")


# triangle = Triangle(5, 12, 13)
# print(triangle)
