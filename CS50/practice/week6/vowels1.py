def count_vowels(text):
    count= 0
    for letter in text:
        if letter in "aeiou":
            count +=1
    return(count)

text = input("Text: ")
result = count_vowels(text)
print(f"The number of vowels is {result}")

