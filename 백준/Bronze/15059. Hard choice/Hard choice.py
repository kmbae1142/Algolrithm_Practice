a, b, c = map(int, input().split())
A, B, C = map(int, input().split())
sub = [A - a, B - b, C - c]
sum = 0

for i in sub:
    if i > 0:
        sum += i
print(sum)