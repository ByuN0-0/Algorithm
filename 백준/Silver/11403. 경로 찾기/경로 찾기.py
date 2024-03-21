import sys
n = int(sys.stdin.readline())
arr = [list(map(int,sys.stdin.readline().split()))for _ in range(n)]

for k in range(n):
    for i in range(n):
        for j in range(n):
            if arr[i][k] and arr[k][j]:
                arr[i][j] = 1

for i in range(n):
    for j in range(n):
        print(arr[i][j], end=" ")
    print()