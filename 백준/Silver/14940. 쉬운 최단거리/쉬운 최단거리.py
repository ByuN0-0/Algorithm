import sys

dir = [(-1, 0), (0, -1), (1, 0), (0, 1)]
arr = []
visited = []
n, m = map(int, sys.stdin.readline().split())

visited = [[0]*m for _ in range(n)]
ans = [[1]*m for _ in range(n)]

for _ in range(n):
    arr.append(list(map(int, sys.stdin.readline().split())))

for i in range(n):
    for j in range(m):
        if (arr[i][j] == 2):
            ans[i][j] = 0
            x = i
            y = j
        if (arr[i][j] == 0):
            ans[i][j] = 0

q = []
q.append((x, y))
visited[x][y] = 1
while (q):
    x, y = q.pop(0)
    for dx, dy in dir:
        nx = x + dx
        ny = y + dy
        if (0 <= nx and 0 <= ny and nx < n and ny < m and visited[nx][ny] == 0 and ans[nx][ny] == 1):
            q.append((nx, ny))
            visited[nx][ny] = 1
            ans[nx][ny] = ans[x][y]+1

for i in range(n):
    for j in range(m):
        if visited[i][j] == 0 and ans[i][j] == 1:
            ans[i][j] = -1

for row in ans:
    for i in row:
        print(i, end=" ")
    print()