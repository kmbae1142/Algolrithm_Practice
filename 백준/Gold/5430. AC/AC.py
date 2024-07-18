import sys
from collections import deque

input = sys.stdin.readline

for _ in range(int(input())):
    func = input()
    n = int(input())
    arr = deque(eval(input()))
    error_check = False
    reverse = 1

    for i in func:
        if i == "R":
            reverse *= -1
        elif i == "D":
            try:
                if reverse == -1:
                    arr.pop()
                else:
                    arr.popleft()
            except IndexError:
                error_check = True
                print("error")
                break

    len_arr = len(arr)

    if len_arr == 0 and error_check == True:
        continue
    elif len_arr == 0 and error_check == False:
        print("[]")
    else:
        if reverse == 1:
            print(str(list(arr)).replace(" ", ""))
        else:
            print(str(list(arr)[::-1]).replace(" ", ""))