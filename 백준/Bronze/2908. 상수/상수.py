a, b = input().split()
A = list(a)
B = list(b)
A.reverse()
B.reverse()
new_a = 0
new_b = 0
n = 100
for i in A:
    new_a += int(i) * n
    n //= 10
n = 100
for i in B:
    new_b += int(i) * n
    n //= 10

if new_a > new_b:
    print(new_a)
else:
    print(new_b)
    