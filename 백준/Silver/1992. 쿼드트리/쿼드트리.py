import sys


def partition(x, y, n):
    if n == 1:
        print(arr[x][y], end="")
        return

    for i in range(x, x+n):
        for j in range(y, y+n):
            if arr[i][j] != arr[x][y]:
                print("(", end="")
                partition(x, y, n//2)
                partition(x, y+n//2, n//2)
                partition(x+n//2, y, n//2)
                partition(x+n//2, y+n//2, n//2)
                print(")", end="")
                return
    print(arr[x][y], end="")
    return


n = int(sys.stdin.readline())
arr = []
for _ in range(n):
    arr.append(list(map(int, sys.stdin.readline().strip())))

partition(0, 0, n)