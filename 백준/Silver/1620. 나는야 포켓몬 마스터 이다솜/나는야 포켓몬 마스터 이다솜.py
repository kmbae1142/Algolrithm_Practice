import sys
input = sys.stdin.readline

str_table = []
dic = {}

n, m = map(int, input().split())
for i in range(n):
    str = input().rstrip()
    str_table.append(str)
    dic[str] = i + 1

for i in range(m):
    problem = input().rstrip()
    if problem.isdigit():
        print(str_table[int(problem) - 1])
    else:
        print(dic[problem])