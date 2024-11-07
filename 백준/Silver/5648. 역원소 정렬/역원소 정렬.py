import sys
input = sys.stdin.read

n, *li = input().split()

for i in range(len(li)):
    li[i] = int(li[i][::-1])

li = sorted(li)

print('\n'.join(map(str, li)))