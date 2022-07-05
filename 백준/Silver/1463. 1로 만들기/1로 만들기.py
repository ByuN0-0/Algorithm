import sys

n = int(sys.stdin.readline())
arr = [-1]*(n+1)

def search(n,arr):
  if n==1:
    return 0
  if n==0:
    return False
  elif arr[n] != -1:
    return arr[n]
  else:
    if n%6 == 0:
      arr[n]=min(search(n//3,arr),search(n//2,arr))+1
    elif n%3 == 0:
      arr[n]=min(search(n//3,arr),search(n-1,arr))+1
    elif n%2 == 0:
      arr[n]=min(search(n//2,arr),search(n-1,arr))+1
    else:
      arr[n]=search(n-1,arr)+1
    return arr[n]

print(search(n,arr))