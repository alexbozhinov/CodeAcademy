import csv

filename = "student_exams.csv"

TOTAL_EXAMS = 10

file_rows = []
students_dictionary = {}

with open(filename, "r") as csvfile:
    csvreader = csv.reader(csvfile)

    fields = next(csvfile)

    for row in csvreader:
        file_rows.append(row)

    rows_count = csvreader.line_num

STUDENT_COUNT = rows_count // TOTAL_EXAMS

for i in range(STUDENT_COUNT):
    key = file_rows[i][0]
    value = list()
    students_dictionary[key] = value

for i in range(len(file_rows)):
    current_exam = int(file_rows[i][1])
    current_exam_points = int(file_rows[i][2])
    students_dictionary[file_rows[i][0]].insert(current_exam - 1, current_exam_points)

print("--==Student exam statistics===---------------------------\n")

print("Students who PASSED their exams--------------------------\n ")

for key, value in students_dictionary.items():
    if sum(value) / 10 >= 80:
        print(f"{key}, who has {sum(value) / 10} on average")

print("\nStudents who have NOT PASSED their exams----------------\n")

for key, value in students_dictionary.items():
    if sum(value) / 10 < 80:
        print(f"{key} - {sum(value) / 10} on average")
