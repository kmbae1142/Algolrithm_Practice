num = int(input())

def max(a, b, c):
    max = a

    if max < b:
        max = b
    if max < c:
        max = c

    return max

n = 1

for i in range(num):
    a, b, c = map(int, input().split())
    
    if a == b and b == c and c == a:
        print(f"Case #{n}: equilateral")
    elif max(a, b, c) < (a + b + c) - max(a, b, c):
        if a == b or b == c or c == a:
            print(f"Case #{n}: isosceles")
        else:
            print(f"Case #{n}: scalene")
    else:
        print(f"Case #{n}: invalid!")

    n += 1