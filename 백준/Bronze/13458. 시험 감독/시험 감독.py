import sys

N = int(sys.stdin.readline())
A = list(map(int, sys.stdin.readline().split()))
B, C = map(int, sys.stdin.readline().split())
ans = 0
for i in range(N):
    A[i] -= B
    ans += 1
    if A[i] > 0:
        if A[i] % C == 0:
            ans += A[i]//C
        else:
            ans += A[i]//C + 1

print(ans)
