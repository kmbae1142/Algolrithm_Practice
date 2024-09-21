import sys
input = sys.stdin.readline

n = int(input())
num = list(map(int, input().split()))
num = set(num)

new_num = sorted(num)

print(*new_num)