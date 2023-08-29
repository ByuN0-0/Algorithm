import sys

dp = [0]*101
dp[1] = 1
dp[2] = 1
dp[3] = 1
dp[4] = 2

for i in range(5, 101):
    dp[i] = dp[i-1]+dp[i-5]

for _ in range(int(sys.stdin.readline())):
    print(dp[int(sys.stdin.readline())])
