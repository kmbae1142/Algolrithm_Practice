import sys
input = sys.stdin.readline

num = []
for _ in range(int(input())):
    n = int(input().rstrip())
    num.append(n)

num.sort()
for i in num:
    print(i)