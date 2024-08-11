def fact(n):
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result


n, m = map(int, input().split())
print(fact(n) // (fact(m) * fact(n - m)))