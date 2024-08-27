L = int(input())
A = int(input())
B = int(input())
C = int(input())
D = int(input())
i = 1

while True:
    if C * i >= A and D * i >= B:
        break
    else:
        i += 1

print(L - i)