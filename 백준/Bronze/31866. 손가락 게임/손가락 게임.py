a, b = map(int, input().split())

if (a == 0 and b == 5) or (a == 5 and b == 2) or (a == 2 and b == 0):
    print("<")
elif (a == 5 and b == 0) or (a == 2 and b == 5) or (a == 0 and b == 2):
    print(">")
elif a == b:
    print("=")
elif (a == 1 or a == 3 or a == 4) and (b == 0 or b == 2 or b == 5):
    print("<")
elif (b == 1 or b == 3 or b == 4) and (a == 0 or a == 2 or a == 5):
    print(">")
else:
    print("=")