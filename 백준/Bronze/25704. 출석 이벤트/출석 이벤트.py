n = int(input())
p = int(input())

info = [p - 500, p - p*0.1, p - 2000, p - p*0.25]

m = (n - n % 5) // 5
if m < 1:
    print(p)
else:
    if int(min(info[0:m])) < 0:
        print(0)
    else:
        print(int(min(info[0:m])))