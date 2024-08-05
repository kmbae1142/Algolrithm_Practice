import sys
input = sys.stdin.readline

def prime_num(n : int) -> int:
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

for _ in range(int(input())):
    n = int(input())
    while True:
        if prime_num(n):
            print(n)
            break
        else:
            n += 1