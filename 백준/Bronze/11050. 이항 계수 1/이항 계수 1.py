import sys

count = 0
n, k = map(int, sys.stdin.readline().rstrip().split())

def fact(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * fact(n - 1)

print(fact(n) // (fact(k) * fact(n - k)))