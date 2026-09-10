numbers = [10,20,30,40,50]

def find_max(numbers):
    largest = numbers[0]
    for number in numbers:
        if number > largest:
            largest = number
            
    return(largest)
maximum = find_max(numbers)
print(f"The maximum number is {maximum}")

