a, b, c = map(int, input().split())

if a == b == c:
    print(2)
elif a >= b and a >= c:
    if a**2 == b**2 + c**2:
        print(1)
    else:
        print("0")
elif b >= a and b >= c:
    if b**2 == a**2 + c**2:
        print(1)
    else:
        print("0")
elif c >= a and c >= b:
    if c**2 == a**2 + b**2:
        print(1)
    else:
        print("0")
else:
    print(0)