import sys
def fibonacci(n):
  dp = [(1,0),(0,1)]
  if n < 2:
    return dp
  else:
    for num in range(2,n+1):
      zero = dp[num-2][0]+dp[num-1][0]
      one = dp[num-2][1]+dp[num-1][1]
      dp.append((zero,one))
    return dp

def solve():
  for _ in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    arr = fibonacci(n)
    print(arr[n][0],arr[n][1])

solve()