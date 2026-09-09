people = [
    {"name": "Wang", "number": "13785549987"},
    {"name": "Togo", "number": "14786985447","email": "28157474@qq.com"},
    {"name": "Waydgsw", "number": "15485698745"}
]

name =input("Name ")

for person in people:
    if person["name"] == name:
        number = person["number"]
        print(f"Found: {number}")
        break
else:
    print("Not found")