import sys

def solve():
  arr = []
  n, m = map(int,sys.stdin.readline().split())
  for _ in range(n):
    arr.append(int(sys.stdin.readline()))

  start = 0
  end = max(arr)

  while start <= end:
    mid = (start+end)//2
    if mid<=0:
      mid = 1
    temp = 0
    for i in range(n):
      temp += arr[i]//mid
    if temp<m:
      end = mid-1
    else:
      start = mid+1
  print(end)
solve()