num = int(input())
stack = []

for i in range(num):
    numbers = int(input())
    if numbers == 0:
        stack.pop(-1)
    else:
        stack.append(numbers)

print(sum(stack))