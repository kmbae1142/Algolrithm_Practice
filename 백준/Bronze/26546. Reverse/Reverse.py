for _ in range(int(input())):
    strclass = input().split()
    string = list(strclass[0])
    i = int(strclass[1])
    j = int(strclass[2])
    del string[i:j]
    print(''.join(string))