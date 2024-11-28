import sys
input = sys.stdin.readline

mbti = input().rstrip()
count = 0

for _ in range(int(input())):
    friend = input().rstrip()
    if friend == mbti:
        count += 1
        
print(count)