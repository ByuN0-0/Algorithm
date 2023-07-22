import sys

t = int(sys.stdin.readline())

a = 300
b = 60
c = 10
if t%c != 0:
    print(-1)
else:
    x = t//a
    t = t%a
    y = t//b
    t = t%b
    z = t//c
    print("%d %d %d"%(x, y, z))