num = [int(input()) for _ in range(6)]
A = num[0] * 3 + num[1] * 2 + num[2]
B = num[3] * 3 + num[4] * 2 + num[5]

if A > B:
    print("A")
elif A < B:
    print("B")
else:
    print("T")