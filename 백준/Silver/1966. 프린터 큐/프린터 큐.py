import sys

def solve():
  for _ in range(int(sys.stdin.readline())):
    n, m = map(int,sys.stdin.readline().split())
    arr = list(map(int,sys.stdin.readline().split()))
    arr2 = [i for i in range(0,n)]
    cnt = 0
    while arr:
      if arr[0] == max(arr):
        cnt+=1
        if arr2[0]==m:
          arr.pop(0)
          arr2.pop(0)
          break
        arr.pop(0)
        arr2.pop(0)
      else:
        arr.append(arr.pop(0))
        arr2.append(arr2.pop(0))
    print(cnt)
solve()