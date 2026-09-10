text = input("Text: ")

count = 0
for word in text:
    if word.lower() in "aeiou":
        count +=1
print(count)