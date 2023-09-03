import sys

n = int(sys.stdin.readline())
dp = [0] * (n + 1)
dp[1] = 1

for i in range(2, n + 1):
    min_value = float('inf')
    root = int(i ** 0.5)  # 제곱근 계산 최적화
    for j in range(1, root + 1):
        min_value = min(min_value, dp[i - j * j])
    dp[i] = min_value + 1

print(dp[n])
