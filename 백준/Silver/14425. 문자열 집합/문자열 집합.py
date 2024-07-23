import sys
input = sys.stdin.readline
dic = {}
count = 0

a, b = map(int, input().split())

for i in range(a):
    str = input().rstrip()
    dic[str] = 0

for i in range(b):
    str_re = input().rstrip()
    if str_re in dic:
        count += 1

print(count)