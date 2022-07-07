import sys

def solve():
  n, m = map(int,sys.stdin.readline().split())
  arr = list(map(int,sys.stdin.readline().split()))

  start = 0
  end = max(arr)

  while start <= end:
    mid = (start+end)//2
    tree = 0
    for i in range(n):
      if (arr[i]-mid)>0:
        tree += arr[i]-mid
      if tree>m:
        break
    if tree>=m:
      start = mid+1
    else:
      end = mid-1
  print(end)
solve()