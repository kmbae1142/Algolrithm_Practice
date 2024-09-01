a, b, c = map(int, input().split())
one = two = 0

if a == 1:
    one += 1
else:
    two += 1

if b == 1:
    one += 1
else:
    two += 1

if c == 1:
    one += 1
else:
    two += 1

if one > two:
    print("1")
else:
    print("2")