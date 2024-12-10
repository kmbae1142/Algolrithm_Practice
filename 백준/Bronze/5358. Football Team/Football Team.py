while True:
    try:
        str = list(input())
        for i in range(len(str)):
            if str[i] == 'i':
                str[i] = 'e'
            elif str[i] == 'e':
                str[i] = 'i'
            elif str[i] == 'I':
                str[i] = 'E'
            elif str[i] == 'E':
                str[i] = 'I'
        print(''.join(str))
    except EOFError:
        break