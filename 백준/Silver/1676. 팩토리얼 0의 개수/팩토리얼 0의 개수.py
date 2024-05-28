def factorial(n):
    result = 1
    for i in range(1, n+1):
        result *= i
    return result


num = int(input())
fact = str(factorial(num))
i = 0

if fact[-1] == '0':
    for i in range(2, num+1):
        if fact[-i] != '0':
            break
    print(i - 1)
else:
    print("0")