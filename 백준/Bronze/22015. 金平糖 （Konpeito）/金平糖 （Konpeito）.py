A, B, C = map(int, input().split())
max_candy = max(A, B, C)
li = [i for i in [max_candy - A, max_candy - B, max_candy - C] if i > 0]
print(sum(li))