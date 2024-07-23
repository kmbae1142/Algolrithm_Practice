a, b = map(int, input().split())

set1 = set(i for i in input().split())
set2 = set(i for i in input().split())

result = set1 ^ set2
print(len(result))