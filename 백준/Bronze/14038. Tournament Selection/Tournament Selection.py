w = 0
l = 0
for _ in range(6):
    g = input()
    if g == "W":
        w += 1

if w == 0:
    print("-1")
elif w < 3:
    print("3")
elif w < 5:
    print("2")
else:
    print("1")