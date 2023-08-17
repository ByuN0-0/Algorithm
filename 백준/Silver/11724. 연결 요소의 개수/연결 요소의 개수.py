import sys

n, m = map(int, sys.stdin.readline().split())
arr = [[0]*(n+1) for _ in range(n+1)]
visited = [0]*(n+1)

ans = 0
for _ in range(m):
    a, b = map(int, sys.stdin.readline().split())
    arr[a][b] = 1
    arr[b][a] = 1
q = []
for i in range(1, n+1):
    if visited[i] == 0:
        q.append(i)
        while (q):
            x = q.pop(0)
            for i in range(1, n+1):
                if (arr[x][i] == 1 and visited[i] == 0):
                    q.append(i)
                    visited[i] = 1
        ans += 1
    else:
        pass
print(ans)
