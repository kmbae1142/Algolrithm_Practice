import sys
input = sys.stdin.readline

T = int(input())
dp = [0] * 10001
dp[1] = dp[2] = 1

for i in range(3, 10001):
    dp[i] = dp[i - 1] + dp[i - 2]

for i in range(T):
    p, q = map(int, input().split())
    print(f"Case #{i+1}: {dp[p] % q}")