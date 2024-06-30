import sys

N, M = map(int, sys.stdin.readline().split())
people = {}
result = []

for i in range(N):
    p = sys.stdin.readline().rstrip()
    people[p] = p

for _ in range(M):
    p_name = sys.stdin.readline().rstrip()
    try:
        result.append(people[p_name])
    except KeyError:
        continue

n_result = sorted(result)
print(len(n_result))
for i in n_result:
    print(i)