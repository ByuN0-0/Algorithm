import sys

N, M = map(int,sys.stdin.readline().split())
arr = [0]*N

for _ in range(M):
  a, b, c = map(int,sys.stdin.readline().split())
  for i in range(a-1,b):
    arr[i]=c

print(*arr)