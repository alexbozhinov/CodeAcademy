import math


def parallelepiped(length, width, height):
    print("Area of parallelepiped = ", 2 * (length + width) * height)
    print("Volume of parallelepiped = ", height * width * length)


def cube(height):
    print("Area of cube = ", 4 * height ** 2)
    print("Volume of cube = ", height ** 3)


def pyramid(wall_area, wall_number, base_area, height):
    print("Area of pyramid = ", base_area + wall_number * wall_area)
    print("Volume of pyramid = ", (base_area * height) / 3)


def cylinder(base_radius, cylinder_height):
    print("Cylinder area = ", 2 * math.pi * base_radius * cylinder_height)
    print("Cylinder volume = ", math.pi * base_radius ** 2 * cylinder_height)


def cone(base_radius, wall_height, cone_height):
    print("Cone area = ", math.pi * base_radius * wall_height)
    print("Cone volume = ", (math.pi * base_radius ** 2 * cone_height) / 3)


def sphere_and_orb(radius):
    print("Sphere area = ", 4 * math.pi * radius ** 2)
    print("Orb volume = ", (4 * math.pi * radius ** 3) / 3)