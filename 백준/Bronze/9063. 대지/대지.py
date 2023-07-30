import sys

xMax = -100001
xMin = 100001
yMax = -100001
yMin = 100001
for _ in range(int(sys.stdin.readline())):
    x, y = map(int, sys.stdin.readline().split())
    if x > xMax:
        xMax = x
    if x < xMin:
        xMin = x
    if y > yMax:
        yMax = y
    if y < yMin:
        yMin = y
print((xMax - xMin) * (yMax - yMin))