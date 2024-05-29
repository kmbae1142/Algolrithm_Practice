import sys
str = sys.stdin.readline().rstrip()

if str[0] == 'A':
    if str[-1] == '+':
        print("4.3")
    elif str[-1] == '0':
        print("4.0")
    elif str[-1] == '-':
        print("3.7")
elif str[0] == 'B':
    if str[-1] == '+':
        print("3.3")
    elif str[-1] == '0':
        print("3.0")
    elif str[-1] == '-':
        print("2.7")
elif str[0] == 'C':
    if str[-1] == '+':
        print("2.3")
    elif str[-1] == '0':
        print("2.0")
    elif str[-1] == '-':
        print("1.7")
elif str[0] == 'D':
    if str[-1] == '+':
        print("1.3")
    elif str[-1] == '0':
        print("1.0")
    elif str[-1] == '-':
        print("0.7")
else:
    print("0.0")