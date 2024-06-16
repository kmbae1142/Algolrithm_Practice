count = 0
while True:
    str = input()
    str = str.lower()

    if str == '#':
        break
    for i in range(len(str)):
        if str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'o' or str[i] == 'u':
            count += 1
    print(count)
    count = 0