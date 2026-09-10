students = {"Alice": 85, "Bob": 92, "Charlie": 78}

def get_score(name):
    try:
        score = students[name]
        print(f"{name}'s scores is {score}")

    except KeyError:
        print("Student not found")

name = input("Enter student name: ")
get_score(name)

