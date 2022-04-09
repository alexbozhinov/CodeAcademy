# done!
import json


def print_student_sentence(name, age, today):
    print("{} is aged {}. He is a passionate learner, and he started a JD program just {}.".format(name, age, today))


print("task1: ", end="")
print_student_sentence("Aleks", 22, "today")

transactions_even = [4, 6, 8, 10]


# done!
def store_transactions(transaction_id, transactions):
    if transaction_id % 2 == 0:
        transactions.append(transaction_id)
    return transactions


print("task2: ", end="")
print(store_transactions(2, transactions_even))

movie_dictionary = {
    "title": "Star Wars",
    "year": 1977,
    "actors": {
        "Darth Vader": "Actor1",
        "Yoda": "Actor2",
        "wages": {
            "wage1": 200.25
        }
    }
}


# done!
def pretty_print_dict(dictionary):
    pretty = json.dumps(dictionary, indent=4)
    print(pretty)


print("task3: ", end="")
pretty_print_dict(movie_dictionary)

sums_array = [5, 11, 6]


# done!
def store_sum(number1, number2, sums):
    number = number1 + number2
    sums.append(number)
    return sums


print("task4: ", end="")
print(store_sum(5, 7, sums_array))


# done!
def get_chars_count(string):
    counter = 0

    for i in string:
        counter = counter + 1
    return counter


print("task5: ", end="")
string_counter = get_chars_count("Hello, World!")
print(string_counter)


# done
def get_abbreviation(string):
    if len(string) > 5:
        to_return = ""
        for i in range(3):
            to_return = to_return + string[i]
        return to_return
    else:
        return None


print("task6: ", end="")
print(get_abbreviation("faculty"))


# print(get_abbreviation("four"))


# done!
def get_titled_string(sentence):
    return sentence.title()


print("task7: ", end="")
print(get_titled_string("hello, world!"))


# done!
def get_number_sum(array, target_sum):
    result = []
    for i in range(len(array)):
        for j in range(i+1, len(array)):
            if (array[i] + array[j]) == target_sum:
                result = [array[i], array[j]]
                return result
    return result


arr = [3, 5, -4, 8, 11, 1, -1, 6]
target_sum = 10
print("task8: ", end="")
print(get_number_sum(arr, target_sum))


# done!
def get_is_valid_subsequence(array, sequence):
    seq_index = 0
    for i in range(len(array)):
        if array[i] == sequence[seq_index]:
            seq_index += 1
            if seq_index == len(sequence):
                return True
    else:
        return False


arr = [5, 1, 22, 25, 6, -1, 8, 10]
seq = [1, 6, -1, 10]
print("task9: ", end="")
print(get_is_valid_subsequence(arr, seq))


# done!
def get_is_palindrome(string):
    j = len(string) - 1
    counter = 0

    for i in range(0, int(len(string) / 2), 1):
        if string[i] == string[j]:
            counter = counter + 1
            j = j - 1
    if counter == int(len(string) / 2):
        return True
    return False


print("task10: ", end="")
print(get_is_palindrome("азобичаммачибоза"))

