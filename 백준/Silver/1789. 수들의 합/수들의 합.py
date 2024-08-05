def sum_1_to_n(n: int) -> int:
    return (n * (n + 1)) // 2

s = int(input())
n = 1
temp = 0
sub = 0

while sum_1_to_n(n) <= s:
    temp = sum_1_to_n(n)
    n += 1

real_n = n - 1

while sub < real_n:
    sub = s - temp
    if sub <= real_n:
        temp = sum_1_to_n(real_n - 1)
        real_n -= 1

print(real_n + 1)