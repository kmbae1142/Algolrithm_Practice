import sys
input = sys.stdin.readline
group_word = 0

for _ in range(int(input())):
    word = input().rstrip()
    alphabet = set(word)
    compare = []
    for i in range(len(word) - 1):
        if word[i] != word[i + 1]:
            compare.append(word[i])
    compare.append(word[-1])
    if len(compare) == len(alphabet):
        group_word += 1

print(group_word)