import sys
input = sys.stdin.readline

def pivo(n):

    if n == 1: return 1
    if n == 2: return 1

    fn1 = 1
    fn2 = 1
    fn = 0

    for i in range(n - 2):
        fn = fn1 + fn2
        fn1 = fn2
        fn2 = fn

    return fn

for i in range(int(input())):
    p, q = map(int, input().split())
    print(f"Case #{i+1}: {pivo(p) % q}")