import sys
input = sys.stdin.readline

str_list = []
n, m = map(int, input().split())

for _ in range(n):
    str = input().rstrip()
    str_list.append(list(str))

for i in str_list:
    i.reverse()

for i in str_list:
     print(''.join(i))