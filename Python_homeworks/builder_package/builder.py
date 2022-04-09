from builder_package.figures.square import Square
from builder_package.figures.triangle import Triangle


class Builder:

    def __init__(self):
        self.square = None

    def build_square(self):
        while True:
            a = int(input("Input squire side length: "))
            self.square = Square(a)
            if self.square is not None:
                break

    def process_new_triangle(self):
        if self.square.triangles_limit():
            a = int(input("Input a: "))
            b = int(input("Input b: "))
            c = int(input("Input c: "))
            triangle = Triangle(a, b, c)

            if triangle is not None:
                self.square.add_triangle(triangle)
        else:
            print("The maximum number of triangles for this builder_package has been reached!")

    def __str__(self):
        return f"{self.square}"

    def __repr__(self):
        return f"This is a square builder with square: {self.square.__repr__()}," \
               f" which contains triangles: {self.square.triangles}"


def start_builder():
    builder = Builder()
    builder.build_square()

    while True:
        number_of_triangles = int(input("Input number of triangles (from 1 to 10): "))
        if 0 < number_of_triangles < 11:
            break
        else:
            print("Incorrect input!")

    for i in range(number_of_triangles):
        builder.process_new_triangle()

    print(builder.__repr__())

    for triangle in builder.square.triangles:
        print(triangle.__repr__())


start_builder()
