scores = []
for i in range(3):
    score = int(input("Number: "))
    scores.append(score)

average = sum(scores)/ len(scores)
print(f"Average: {average:.2f}")