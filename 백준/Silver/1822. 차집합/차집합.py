import sys
input = sys.stdin.readline

a, b = map(int, input().split())
A = {int(i) for i in input().split()}
B = {int(i) for i in input().split()}

ans = list(A - B)
ans.sort()

print(len(ans))
print(*ans)