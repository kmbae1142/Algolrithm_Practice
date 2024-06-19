def sum(a, b, c):
    return 3 * a + 20 * b + 120 * c

t1, e1, f1 = map(int, input().split())
t2, e2, f2 = map(int, input().split())

if sum(t1, e1, f1) < sum(t2, e2, f2):
    print("Mel")
elif sum(t1, e1, f1) == sum(t2, e2, f2):
    print("Draw")
else:
    print("Max")