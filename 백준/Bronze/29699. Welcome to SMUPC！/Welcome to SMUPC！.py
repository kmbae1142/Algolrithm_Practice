st = "WelcomeToSMUPC"
num = int(input())

if num <= 14:
    print(st[num - 1])
else:
    print(st[num%14 - 1])