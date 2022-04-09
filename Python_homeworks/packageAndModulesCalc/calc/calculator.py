from calc.algebra.equations import quadratic_equation, linear_equation
from calc.algebra.numerical_systems import *
from calc.geometry.planimetry import circle, triangle, rectangle, square, trapeze
from calc.algebra.simple_calculations import add, subtract, multiply, divide, degree, square_root, factorial, \
    percent_of_y_is_x
from calc.geometry.stereometry import parallelepiped, cube, pyramid, cylinder, cone, sphere_and_orb


def equations():
    while True:
        print("1. Linear equation\n2. Quadratic equation\n3. Back\n4. Exit\n")
        choice = int(input("Input choice: "))
        if choice == 1:
            print("Ax + B = 0")
            a = int(input("Input A: "))
            b = int(input("Input B: "))
            linear_equation(a, b)
        elif choice == 2:
            print("Ax**2 + Bx + C = 0")
            a = int(input("Input A: "))
            b = int(input("Input B: "))
            c = int(input("Input B: "))
            quadratic_equation(a, b, c)
        elif choice == 3:
            algebra()
            break
        else:
            break
            return None


def from_hex():
    while True:
        print("1. To binary\n2. To octal\n3. To decimal\n4. Back\n5. Exit\n")
        choice = int(input("Input choice: "))
        if choice == 1:
            number = input("Input hex number: ")
            print(">> ", from_hex_to_binary(number))
        elif choice == 2:
            number = input("Input hex number: ")
            print(">> ", from_hex_to_octal(number))
        elif choice == 3:
            number = input("Input hex number: ")
            print(">> ", from_hex_to_decimal(number))
        elif choice == 4:
            numerical_systems()
            break
        else:
            break
            return None


def from_decimal():
    while True:
        print("1. To binary\n2. To octal\n3. To hex\n4. Back\n5. Exit\n")
        choice = int(input("Input choice: "))
        if choice == 1:
            number = input("Input decimal number: ")
            print(">> ", from_decimal_to_binary(number))
        elif choice == 2:
            number = input("Input decimal number: ")
            print(">> ", from_decimal_to_octal(number))
        elif choice == 3:
            number = input("Input decimal number: ")
            print(">> ", from_decimal_to_hex(number))
        elif choice == 4:
            numerical_systems()
            break
        else:
            break
            return None


def from_octal():
    while True:
        print("1. To binary\n2. To decimal\n3. To hex\n4. Back\n5. Exit\n")
        choice = int(input("Input choice: "))
        if choice == 1:
            number = input("Input octal number: ")
            print(">> ", from_octal_to_binary(number))
        elif choice == 2:
            number = input("Input octal number: ")
            print(">> ", from_octal_to_decimal(number))
        elif choice == 3:
            number = input("Input octal number: ")
            print(">> ", from_octal_to_hex(number))
        elif choice == 4:
            numerical_systems()
            break
        else:
            break
            return None


def from_binary():
    while True:
        print("1. To octal\n2. To decimal\n3. To hex\n4. Back\n5. Exit\n")
        choice = int(input("Input choice: "))
        if choice == 1:
            number = input("Input binary number: ")
            print(">> ", from_binary_to_octal(number))
        elif choice == 2:
            number = input("Input binary number: ")
            print(">> ", from_binary_to_decimal(number))
        elif choice == 3:
            number = input("Input binary number: ")
            print(">> ", from_binary_to_hex(number))
        elif choice == 4:
            numerical_systems()
            break
        else:
            break
            return None


def numerical_systems():
    while True:
        print("1. From binary\n2. From octal\n3. From decimal\n4. From hex\n5. Back\n6. Exit\n")
        choice = int(input("Input choice: "))
        if choice == 1:
            from_binary()
            break
        elif choice == 2:
            from_octal()
            break
        elif choice == 3:
            from_decimal()
            break
        elif choice == 4:
            from_hex()
            break
        elif choice == 5:
            algebra()
            break
        else:
            break
            return None


def simple_calculations():
    while True:
        print("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Degree\n6. Square root\n7. Factorial\n"
              "8. Percent\n9. Back\n10. Exit\n")
        choice = int(input("Input choice: "))
        if choice == 1:
            a = int(input("Input a: "))
            b = int(input("Input b: "))
            print(">> ", add(a, b))
        elif choice == 2:
            a = int(input("Input a: "))
            b = int(input("Input b: "))
            print(">> ", subtract(a, b))
        elif choice == 3:
            a = int(input("Input a: "))
            b = int(input("Input b: "))
            print(">> ", multiply(a, b))
        elif choice == 4:
            a = int(input("Input a: "))
            b = int(input("Input b: "))
            print(">> ", divide(a, b))
        elif choice == 5:
            number = int(input("Input number: "))
            deg = int(input("Input degree: "))
            print(">> ", degree(number, deg))
        elif choice == 6:
            number = float(input("Input number: "))
            print(">> ", square_root(number))
        elif choice == 7:
            number = float(input("Input number: "))
            print(">> ", factorial(number))
        elif choice == 8:
            x = int(input("Input x: "))
            y = int(input("Input y: "))
            print(f">> {x} is {percent_of_y_is_x(x, y)}% of {y}")
        elif choice == 9:
            algebra()
            break
        else:
            break
            return None


def algebra():
    while True:
        print("1. Simple calculations\n2. Numerical systems\n3. Equations\n4. Back\n5. Exit\n")
        choice = int(input("Input choice: "))
        if choice == 1:
            simple_calculations()
            break
        elif choice == 2:
            numerical_systems()
            break
        elif choice == 3:
            equations()
            break
        elif choice == 4:
            main()
            break
        else:
            break
            return None


def stereometry():
    while True:
        print("\n1. Parallelepiped\n2. Cube\n3. Pyramid\n4. Cylinder\n5. Cone\n6. Sphere and Orb\n7. Back\n8. Exit\n")
        choice = int(input("Input choice: "))
        if choice == 1:
            length = float(input("Input length: "))
            width = float(input("Input with: "))
            height = float(input("Input height: "))
            parallelepiped(length, width, height)
        elif choice == 2:
            height = float(input("Input height: "))
            cube(height)
        elif choice == 3:
            walls = int(input("Input number of walls: "))
            wall_area = float(input("Input wall area: "))
            base_area = float(input("Input base area: "))
            height = float(input("Input pyramid height: "))
            pyramid(wall_area, walls, base_area, height)
        elif choice == 4:
            base_radius = float(input("Input base radius: "))
            cylinder_height = float(input("Input height: "))
            cylinder(base_radius, cylinder_height)
        elif choice == 5:
            base_radius = float(input("Input base radius: "))
            cone_height = float(input("Input cone height: "))
            wall_height = float(input("Input wall height: "))
            cone(base_radius, wall_height, cone_height)
        elif choice == 6:
            radius = float(input("Input radius: "))
            sphere_and_orb(radius)
        elif choice == 7:
            geometry()
            break
        else:
            break
            return None


def planimetry():
    while True:
        print("\n1. Circle\n2. Triangle\n3. Rectangle\n4. Square\n5. Trapeze\n6. Back\n7. Exit\n")
        choice = int(input("Input choice: "))
        if choice == 1:
            radius = float(input("Input radius: "))
            circle(radius)
        elif choice == 2:
            a = float(input("Input a: "))
            b = float(input("Input b: "))
            c = float(input("Input c: "))
            triangle(a, b, c)
        elif choice == 3:
            a = float(input("Input a: "))
            b = float(input("Input b: "))
            rectangle(a, b)
        elif choice == 4:
            a = float(input("Input a: "))
            square(a)
        elif choice == 5:
            a = float(input("Input a: "))
            b = float(input("Input b: "))
            h = float(input("Input h: "))
            trapeze(a, b, h)
        elif choice == 6:
            geometry()
            break
        else:
            break
            return None


def geometry():
    while True:
        print("1. Planimetry\n2. Stereometry\n3. Back\n4. Exit\n")
        choice = int(input("Input choice: "))
        if choice == 1:
            planimetry()
            break
        elif choice == 2:
            stereometry()
            break
        elif choice == 3:
            main()
            break
        else:
            break
            return None


def main():
    while True:
        print(10 * "*" + "CALCULATOR" + 10 * "*")
        print("\n1. Algebra\n2. Geometry\n3. Exit\n")
        choice = int(input("Input choice: "))
        if choice == 1:
            algebra()
            break
        elif choice == 2:
            geometry()
            break
        else:
            print("You closed the program!")
            break
            return None


main()
