import math
n = int(input())
if n == 0:
    print("0")
else:
    print(math.isqrt(n - 1) + 1)