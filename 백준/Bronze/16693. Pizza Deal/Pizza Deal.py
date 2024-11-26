import math
a, p = map(int, input().split())
r, p2 = map(int, input().split())

if a / p > (r**2 * math.pi) / p2:
    print("Slice of pizza")
else:
    print("Whole pizza")