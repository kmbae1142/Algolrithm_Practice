def decimal(B, rem1, N):
    rem = rem1
    share = 0
    for _ in range(N):
        share = (rem * 10) // B
        rem = (rem * 10) % B
    return share


A, B, N = map(int, input().split())

print(decimal(B, A % B, N))