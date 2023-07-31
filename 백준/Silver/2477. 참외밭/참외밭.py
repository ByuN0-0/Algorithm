import sys
arr = []
m = int(sys.stdin.readline())

largeX = 0
largeY = 0
first = 0
second = 0
temp = 0
for i in range(6):
    a, b = map(int, sys.stdin.readline().split())
    arr.append(b)
    if (largeX < b and ((a == 1) or (a == 2))):
        largeX = b
        first = i
    if (largeY < b and ((a == 3) or (a == 4))):
        largeY = b
        second = i
if ((second == 5 and first == 0) or (second == 0 and first == 5)):
    temp = 0
elif (first < second):
    temp = second
else:
    temp = first
temp += 2
temp2 = temp + 1

if (temp > 5):
    temp -= 6
if (temp2 > 5):
    temp2 -= 6
ans = (largeX * largeY) - (arr[temp] * arr[temp2])
print(ans * m)
