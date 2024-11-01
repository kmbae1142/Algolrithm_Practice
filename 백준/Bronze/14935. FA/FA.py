x = input()
while True:
    temp = int(x[0]) * len(x)
    if int(x) == temp:
        check = 1
        break
    x = str(temp)

if check:
    print("FA")
else:
    print("NFA")