def hanoi_tower(n, from1, temp2, to3):
    if n == 1:
        print(from1, to3)
    else:
        hanoi_tower(n - 1, from1, to3, temp2)
        print(from1, to3)
        hanoi_tower(n - 1, temp2, from1, to3)

n = int(input())
print(pow(2, n) - 1)
if n <= 20:
    hanoi_tower(n, 1, 2, 3)