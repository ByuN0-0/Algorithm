import sys
arr = []
n, m = map(int,sys.stdin.readline().split())
for k in range(1,n+1):
  arr.append(k)
for _ in range(m):
  i, j = map(int,sys.stdin.readline().split())
  temp = arr[i-1]
  arr[i-1]=arr[j-1]
  arr[j-1]=temp

print(*arr)