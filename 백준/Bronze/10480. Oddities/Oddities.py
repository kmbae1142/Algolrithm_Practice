for _ in range(int(input())):
    n = int(input())
    if abs(n) % 2 == 0:
        print(f"{n} is even")
    else:
        print(f"{n} is odd")