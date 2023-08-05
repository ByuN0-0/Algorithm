import sys
global arr
global white
global blue


def partition(x, y, n):
    global arr
    global white
    global blue
    color = arr[x][y]
    for i in range(x, x+n):
        for j in range(y, y+n):
            if (color != arr[i][j]):
                partition(x, y, n//2)
                partition(x, y+n//2, n//2)
                partition(x+n//2, y, n//2)
                partition(x+n//2, y+n//2, n//2)
                return
    if color == 0:
        white += 1
    else:
        blue += 1


n = int(sys.stdin.readline())
arr = []
white = 0
blue = 0
for _ in range(n):
    arr.append(list(map(int, sys.stdin.readline().split())))

partition(0, 0, n)
print(white)
print(blue)
