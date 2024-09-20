def pivo(n):
    dp = [0] * (n + 1)
    dp[0] = 0
    if n > 0:
        dp[1] = 1

    for i in range(2, n + 1):
        dp[i] = dp[i - 1] % 1000000007 + dp[i - 2] % 1000000007

    return dp[n]


num = int(input())

print(pivo(num) % 1000000007)