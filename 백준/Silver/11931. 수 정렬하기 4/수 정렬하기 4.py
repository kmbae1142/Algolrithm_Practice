import sys
input = sys.stdin.readline

li = []
for _ in range(int(input())):
    li.append(int(input()))

li.sort(reverse=True)

for i in li:
    print(i)