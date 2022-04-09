import math


def linear_equation(a, b):
    if a == 0 and b != 0:
        print("The equation is not solvable!")
    elif a == 0 and b == 0:
        print("x belongs to (-inf, +inf)")
    else:
        print("The equation has only one real root x = ", -b / a)


def quadratic_equation(a, b, c):
    d = b ** 2 - 4 * a * c
    if a == 0:
        linear_equation(b, c)
    else:
        if d < 0:
            print("The equation hasn't got real roots!")
        elif d == 0:
            print("The equation has only one real root x = ", -b / 2 * a)
        else:
            print(
                f"The equation has two real roots x1 = {(-b + math.sqrt(d)) / 2 * a} and x2 = {(-b - math.sqrt(d)) / 2 * a}")