X, L, R = map(int, input().split())
if L <= X <= R:
    print(X)
elif X <= L <= R:
    print(L)
elif L <= R <= X:
    print(R)