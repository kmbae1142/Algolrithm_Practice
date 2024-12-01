s = int(input())
f = int(input())

if s < f:
    print("high speed rail")
elif s == f:
    if s <= 2400:
        print("high speed rail")
    else:
        print("flight")
else:
    print("flight")