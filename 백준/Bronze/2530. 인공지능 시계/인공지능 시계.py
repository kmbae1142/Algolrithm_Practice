h, m, s = map(int, input().split())
d = int(input())

s += d
m += s // 60
h += m // 60

print(h % 24, m % 60, s % 60)