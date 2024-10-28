for _ in range(int(input())):
    n = input()
    if (int(n) + 1) % int(n[2:4]) == 0:
        print("Good")
    else:
        print("Bye")