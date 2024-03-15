import sys

n = int(sys.stdin.readline())
arr = []
dp = [[0] * n for _ in range(n)]
for _ in range(n):
    arr.append(list(map(int, sys.stdin.readline().split())))

dp[0][0] = arr[0][0]
for i in range(1, n):
    for j in range(i + 1):
        if j - 1 < 0:
            dp[i][j] = arr[i][j] + dp[i - 1][j]
        else:
            dp[i][j] = arr[i][j] + max(dp[i - 1][j - 1], dp[i - 1][j])

ans = max(dp[n-1])
print(ans)
