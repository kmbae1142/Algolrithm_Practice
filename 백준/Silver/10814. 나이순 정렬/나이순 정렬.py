import sys
input = sys.stdin.readline
p = []

for _ in range(int(input())):
    people = input().rstrip().split()
    p.append((people[0], people[-1]))

p.sort(key=lambda x: int(x[0]))

for i, j in p:
    print(i, j)