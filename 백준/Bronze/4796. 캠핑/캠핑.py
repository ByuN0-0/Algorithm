import sys

Case = 0

while (True):
    Case += 1
    L, P, V = map(int, sys.stdin.readline().split())
    if L == 0 and P == 0 and V == 0:
        break
    ans = V//P*L
    if (V % P) > L:
        ans += L
    else:
        ans += V % P
    print(f"Case {Case}: {ans}")