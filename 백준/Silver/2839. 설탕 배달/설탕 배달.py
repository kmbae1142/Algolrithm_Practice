num = int(input())
opt = []
    
for i in range(num // 5 + 1):
    for j in range(num // 3 + 1):
        if i * 5 + j * 3 == num:
            opt.append(i + j)

if len(opt) == 0:
    print("-1")
else:
    print(min(opt))