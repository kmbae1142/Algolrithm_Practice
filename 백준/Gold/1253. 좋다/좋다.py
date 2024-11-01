import sys
input = sys.stdin.readline

def good(li: list, num: int):
    left, right, sum = 0, len(li) - 1, 0
    while left < right < len(li):
        sum = li[left] + li[right]
        if sum == num:
            return 1
        elif sum > num:
            right -= 1
        elif sum < num:
            left += 1

n = int(input())
nums = list(map(int, input().split()))
nums.sort()
count = 0

for i in range(len(nums)):
    temp = list(nums)
    del temp[i]
    if good(temp, nums[i]):
        count += 1

print(count)