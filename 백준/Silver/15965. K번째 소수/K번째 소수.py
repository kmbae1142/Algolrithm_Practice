n = int(input())
a = [False, False] + [True]*(10000000 - 1)
primes = []

for i in range(2, 10000001):
    if a[i]:
        if len(primes) == n:
            break
        primes.append(i)
        for j in range(2*i, 10000001, i):
            a[j] = False

print(primes[n - 1])