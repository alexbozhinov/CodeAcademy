def get_min_of_two_numbers(y, z):
    if y < z:
        return y
    else:
        return z


# done
def get_min_of_three_members(x, y, z):
    # finish the function by adding code that would return the minimum of x, y and z
    # Use another function to find the minimum of y and z
    # Do not use the builtin min()

    min_number = get_min_of_two_numbers(y, z)
    min_number = get_min_of_two_numbers(x, min_number)
    return min_number


print("task1: ", end="")
print(get_min_of_three_members(3, 8, 4))


# done
def reverse_string(string):
    # Add code that would return reversed string
    # Do not use slice notation ot reverse()

    reversed_string = ""

    for symbol in string:
        reversed_string = symbol + reversed_string  # simulate stack of adding symbols using concatenation
    return reversed_string


print("task2: ", end="")
print(reverse_string("Hello world!"))


# For the next functions, it is up to you to determine the names they should have

# 3. Write a function that would return if given int is within a certain range

# done
def is_number_in_range(number, begin, end):
    if begin <= number <= end:
        return True
    return False


print("task3: ", end="")
print(is_number_in_range(5, -5, 12))


# 4. Write a Python function to create and print a list where the values are square of numbers
# between 1 and 30 (both included)

# done
def square_of_numbers():
    numbers_list = []
    for i in range(1, 31):
        pair = (i, i ** 2)
        numbers_list.append(pair)
    print(numbers_list)


print("task4: ", end="")
square_of_numbers()


# **5. Write a function that accepts multidimensional list and prints out list elements nested by
# their dimension:
# Example: [[1, 2, [3, 4, [6]]], [[], [], [3, 4, 5]]]
# 1, 2
#      3, 4
#          6
#
#
#          3, 4, 5
#
# Hint: You may, or you may not use recursion

# in progress...
def print_multidimensional_list(nested_list):
    print(nested_list)


list_of_lists = [[1, 2, [3, 4, [6]]], [[], [], [3, 4, 5]]]
# print_multidimensional_list(list_of_lists)

# Decorators
# 1. Write a decorator that would be used on a function that return a number. If today is wednesday,
# friday, or sunday, the function should return the number decreased byt 1.5.
# 2. Write decorator login_required that would be used to check if a user is logged, and if not,
# it should print out "Login required", and if user is logged, the decorated function should print
# "Welcome"
# For user you can use {'name': 'User name', 'logged': True / False}
# 3. Write a decorator that prints out "Mary Spring" whenever the decorated function is called.
