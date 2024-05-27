def factorial(n):
    result = 1
    for i in range(1, n+1):
        result *= i
    return result


num = int(input())
for i in range(num):
    r, n = map(int, input().split())
    print(factorial(n) // (factorial(n - r) * factorial(r)))