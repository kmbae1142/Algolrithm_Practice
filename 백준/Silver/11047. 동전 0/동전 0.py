import sys
N, M = map(int, sys.stdin.readline().split())
coin = []
sum = 0

for _ in range(N):
    coin.append(int(sys.stdin.readline()))

for i in range(len(coin) - 1, -1, -1):
    if coin[i] <= M:
        sum += M // coin[i]
        M %= coin[i]
        
print(sum)