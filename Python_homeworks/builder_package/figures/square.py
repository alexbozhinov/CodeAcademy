from builder_package.figures.side import Side
from builder_package.figures.triangle import Triangle


class Square:
    SQUARE_NUMBER_OF_SIDES = 4
    MINIMAL_SQUARE_SIDE = 4
    TRIANGLES_COUNT_LIMIT = 10

    def __init__(self, a: int):
        self.a = Side(a)
        self.triangles = []

    def __new__(cls, *args, **kwargs):
        if args.__getitem__(0) >= cls.MINIMAL_SQUARE_SIDE:
            return super().__new__(cls)
        else:
            print("The square side is too small!")
            return None

    def area(self):
        return self.a.length ** 2

    def __free_area(self):
        filled_area = float(0.0)

        for triangle in self.triangles:
            filled_area += triangle.area()
        return self.area() - filled_area

    def triangles_limit(self):
        return self.triangles.__len__() <= self.TRIANGLES_COUNT_LIMIT

    def perimeter(self):
        return self.SQUARE_NUMBER_OF_SIDES * self.a.length

    def __can_hold_a_triangle(self, triangle: Triangle):
        if self.__free_area() >= triangle.area():
            return True
        return False

    def add_triangle(self, triangle: Triangle):
        if self.__can_hold_a_triangle(triangle):
            self.triangles.append(triangle)
            print("Triangle added successfully!")
        else:
            print("Not enough free area in the square!")

    def triangles_count(self):
        return len(self.triangles)

    def __str__(self):
        return f"side = {self.a.length}; perimeter = {self.perimeter()}; area = {self.area()}"

    def __repr__(self):
        return (f"This is a square with side a = {self.a.length}, perimeter P = {self.perimeter()}, "
                f"area S = {self.area()} which contains {len(self.triangles)} "
                f"triangles and has {self.__free_area()} free area")


# square = Square(5)
# print(square.__repr__())
