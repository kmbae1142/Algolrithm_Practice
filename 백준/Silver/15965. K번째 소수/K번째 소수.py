n = int(input())
a = [False, False] + [True]*(500000 - 1)
primes = []

for i in range(2, 500001):
    if a[i]:
        primes.append(i)
        for j in range(2*i, 500001, i):
            a[j] = False

print(primes[n - 1])