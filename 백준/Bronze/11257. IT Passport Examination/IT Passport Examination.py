for _ in range(int(input())):
    a, b, c, d = map(int, input().split())
    if b + c + d >= 55 and b >= 35*0.3 and c >= 25*0.3 and d >= 40*0.3:
        print(f"{a} {b + c + d} PASS")
    else:
        print(f"{a} {b + c + d} FAIL")