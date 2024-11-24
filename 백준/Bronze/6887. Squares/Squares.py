n = int(input())
i = 1
while i * i <= n:
    i += 1
i -= 1
print(f"The largest square has side length {i}.")