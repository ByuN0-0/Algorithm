import sys

n = int(sys.stdin.readline())
arr = list(map(int,sys.stdin.readline().split()))
arr2 = sorted(list(set(arr)))

ans = {arr2[i] : i for i in range(len(arr2))}

for i in arr:
    print(ans[i], end=' ')
