def solution(n):
    dp = []
    dp.append(0)
    dp.append(1)
    for i in range(2,n+1):
        dp.append(dp[i-2]+dp[i-1])
    answer = dp[n]%1234567
    return answer