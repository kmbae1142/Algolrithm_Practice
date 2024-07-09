R, B = map(int, input().split())
sum = 0

for i in range(1, B + 1):
    if B % i == 0:
        sum = (B // i) * 2 + i * 2 + 4
        if sum == R:
            if i + 2 > B // i + 2:
                print(i + 2, B // i + 2)
                break
            else:
                print(B // i + 2, i + 2)
                break
