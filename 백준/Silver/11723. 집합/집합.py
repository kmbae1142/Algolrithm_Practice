import sys
R = set()

for _ in range(int(sys.stdin.readline())):
    cmd = sys.stdin.readline().rstrip().split()
    
    if cmd[-1].isdigit() == True:
        x = int(cmd[-1])

    if cmd[0] == "add" and x not in R:
        R.add(x)

    elif cmd[0] == "remove" and x in R:
        R.remove(x)

    elif cmd[0] == "check":
        if x in R:
            print("1")
        else:
            print("0")

    elif cmd[0] == "toggle":
        if x in R:
            R.remove(x)
        else:
            R.add(x)

    elif cmd[0] == "all":
        R = set(i for i in range(1, 21))

    elif cmd[0] == "empty":
        R = set()