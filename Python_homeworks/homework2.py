import csv
import math
import os.path
import re

from settings.testing import INPUT_DIR


def get_students_data():
    with open(os.path.join(INPUT_DIR, 'students_data.csv'), 'r') as source:
        reader = csv.reader(source)

        # Finish the function by adding code that would extract the student's data from the file.
        # We only need valid students_data, i.e. from filled rows.

        students_dictionary = {}


# done
def get_sqrt(number):
    # This function is not working, can you fix it?
    return math.sqrt(number)
    # The problem was that we didn't import math


print("task2: ", end="")
print(get_sqrt(81))


def get_top_three_students():
    # 1. Read the students_data.csv
    # 2. Collect the student's data
    # 3. Return the top 3 students, ranked by current result.
    pass


def set_entry_checker():
    # Ask for user's data: First name, age and VIP status.
    # If user's age is under 18, do not allow user to proceed
    # If user's age is between 18 - 25, allow them to stay up to 11pm
    # If group 18_25 has more than 10 users, do not allow user to enter.
    # If user is aged over 25, welcome them without any additional conditions.
    # As an output print out the users count from each group, and also print the VIPs
    # Example input: (Georgi 28, VIP) OR (Alex 25)
    pass


# done
def get_even_numbers(array):
    # Finish the function by adding code that would print out only the even numbers.

    even_numbers = []

    for number in array:
        if number % 2 == 0:
            even_numbers.append(number)
    return even_numbers


print("task5: ", end="")
array_numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print(get_even_numbers(array_numbers))


# done
def get_is_password_valid():
    # Ask for user's password.

    password = input("Input password: ")

    # Check user's password against the following conditions:
    # At least 6 symbols, and maximum of 32 symbols.
    if len(password) <= 6 or len(password) >= 32:
        return False

    # At least 1 upper case letter.
    # At least 1 symbol.
    regex = "^(?=.*[A-Z])(?=.*[@$!%*#?&])"
    pat = re.compile(regex)
    mat = re.search(pat, password)

    if not mat:
        return False

    return True

    # hint: use the re library.


print("task6: ", end="")
print("The password is valid: ", get_is_password_valid())
