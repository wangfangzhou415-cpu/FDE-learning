scores = {"Tom": 85,"Alice": 92,"Bob": 78,"Jack": 95}

def get_score(name):
    score = scores[name]
    return score

name = input("Name: ")
result = get_score(name)
print(f"{name}'s score is {result}")


