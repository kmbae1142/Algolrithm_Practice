subject = input()
count = 0

for _ in range(int(input())):
    re_subject = input()
    if re_subject[:5] == subject[:5]:
        count += 1

print(count)