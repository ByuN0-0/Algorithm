import sys

N, M, V = map(int,sys.stdin.readline().split())

arr = []
visited = [0]*(N+1)
global ans
ans = []

for _ in range(N+1):
  arr.append([])

for _ in range(M):
  a, b = map(int,sys.stdin.readline().split())
  arr[a].append(b)
  arr[b].append(a)

for i in range(N+1):
  arr[i].sort()

def dfs(visited, arr, v):
  global ans
  visited[v] = 1
  ans.append(v)
  for i in arr[v]:
    if visited[i]==1:
      pass
    else:
      dfs(visited, arr, i)

def bfs(visited,arr,v):
  global ans
  q = []
  q.append(v)
  visited[v] = 1
  while q:
    v = q[0]
    del q[0]
    ans.append(v)
    for i in arr[v]:
      if visited[i]==0:
        visited[i]=1
        q.append(i)

dfs(visited,arr,V)
print(*ans)
visited = [0]*(N+1)
ans = []
bfs(visited,arr,V)
print(*ans)