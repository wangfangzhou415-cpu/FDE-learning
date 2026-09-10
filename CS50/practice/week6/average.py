numbers = [10, 20, 30, 40, 50]

def calculate_average(numbers):
    total = 0
    for number in numbers:
        total += number
    average = total / len(numbers)
    return average

result = calculate_average(numbers)

print(f"The average is {result:.0f}")