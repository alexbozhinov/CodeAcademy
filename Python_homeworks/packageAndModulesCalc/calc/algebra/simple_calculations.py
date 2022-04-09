import math


def add(left, right):
    return left + right


def subtract(left, right):
    return left - right


def multiply(left, right):
    return left * right


def divide(left, right):
    if right == 0:
        return None
    else:
        return left / right


def degree(number, deg):
    return number ** deg


def square_root(number):
    return math.sqrt(number)


def factorial(number):
    if number == 0:
        return 1
    else:
        return number * factorial(number - 1)


def percent_of_y_is_x(x, y):
    return (x / y) * 100
