import sys

INF = int(1e9)
n, m = map(int, sys.stdin.readline().split())
arr = [[INF]*(n+1) for _ in range(n+1)]
kb = [0]*n

for _ in range(m):
    i, j = map(int, sys.stdin.readline().split())
    arr[i][j] = 1
    arr[j][i] = 1

for k in range(0,n+1):
    arr[k][k]=0

for k in range(1, n+1):
    for i in range(1, n+1):
        for j in range(1, n+1):
            arr[i][j] = min(arr[i][j],arr[i][k]+arr[k][j])

kb = INF
answer = 0
for i in range(n, 0, -1):
    s = sum(arr[i][1:])
    if kb>=s:
        kb = s
        answer = i
print(answer)