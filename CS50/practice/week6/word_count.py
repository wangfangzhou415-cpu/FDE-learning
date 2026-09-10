with open("story.text","r") as file:
    text = file.read()

words = text.split()

print(f"The number of words is {len(words)}")