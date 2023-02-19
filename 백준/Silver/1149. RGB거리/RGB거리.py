import sys
arr = [[0 for j in range(3)]for i in range(1001)]
N = int(sys.stdin.readline())
for i in range(1,N+1):
  cost=list(map(int,sys.stdin.readline().split()))
  arr[i][0] = min(arr[i-1][1],arr[i-1][2])+cost[0]
  arr[i][1] = min(arr[i-1][0],arr[i-1][2])+cost[1]
  arr[i][2] = min(arr[i-1][0],arr[i-1][1])+cost[2]
print(min(arr[N][0],arr[N][1],arr[N][2]))