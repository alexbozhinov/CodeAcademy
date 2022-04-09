import math

from calc.algebra.simple_calculations import square_root


def circle(radius):
    perimeter = 2 * math.pi * radius
    area = math.pi * (radius ** 2)
    print("Circle perimeter = ", perimeter)
    print("Circle area = ", area)


def triangle(a, b, c):
    perimeter = a + b + c
    print("Triangle perimeter = ", perimeter)
    perimeter /= 2
    area = square_root(perimeter * (perimeter - a) * (perimeter - b) * (perimeter - c))
    print("Area of triangle = ", area)
    hc = (2 * area) / c
    print("hc = ", hc)
    print(f"angle BAC = {calc_angle(a, b, c)}")
    print(f"angle ABC= {calc_angle(b, c, a)}")
    print(f"angle BCA= {calc_angle(c, a, b)}")


def calc_angle(a, b, c):
    return round(180 / math.pi * math.acos((b ** 2 + c ** 2 - a ** 2) / (2 * b * c)))


def rectangle(a, b):
    print("Rectangle perimeter = ", a * 2 + b * 2)
    print("Rectangle area = ", a * b)


def square(a):
    print("Square perimeter = ", 4 * a)
    print("Square area = ", a * a)


def trapeze(a, b, h):
    print("Trapeze area = ", ((a + b) / 2) * h)