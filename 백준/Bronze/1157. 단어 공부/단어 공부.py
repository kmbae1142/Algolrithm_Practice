word = input()
word = word.upper()
words = {}
count = 0

for i in word:
    if i not in words:
        words[i] = 1
    else:
        words[i] += 1

new_list = [i for i in words.values()]

for i in new_list:
    if max(new_list) == i:
        count += 1

if count == 1:
    for i in words.keys():
        if words[i] == max(new_list):
            print(i)
else:
    print("?")