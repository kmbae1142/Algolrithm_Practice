str = input()

if len(str) == 2:
    print(int(str[0]) + int(str[1]))
elif len(str) == 3:
    if str[2] == '0':
        print(int(str[0]) + int(str[1] + str[2]))
    else:
        print(int(str[0] + str[1]) + int(str[2]))
else:
    print(int(str[0] + str[1]) + int(str[2] + str[3]))