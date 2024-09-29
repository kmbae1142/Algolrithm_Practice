import sys
input = sys.stdin.readline

def prime_numbers(n):
    arr = [i for i in range(n + 1)]
    arr[0] = arr[1] = 0
    for i in range(2, int(n ** 0.5) + 1):
        if arr[i]:
            for j in range(i * i, n + 1, i):
                arr[j] = 0

    return [i for i in arr[2:] if arr[i]]

for _ in range(int(input())):
    n = int(input())
    primes = prime_numbers(n)
    tuple = []
    for i in primes:
        count = 0
        while n % i == 0:
            n //= i
            count += 1
        if count > 0:
            tuple.append((i, count))
    for i, j in tuple:
        print(i, j)