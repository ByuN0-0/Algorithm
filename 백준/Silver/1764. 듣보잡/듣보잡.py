import sys
arr1 = []
arr2 = []
cnt = 0
n, m = map(int,sys.stdin.readline().split())
for _ in range(n):
    arr1.append(sys.stdin.readline().strip())
for _ in range(m):
    arr2.append(sys.stdin.readline().strip())

s1 = set(arr1)
s2 = set(arr2)
ans = sorted(list(s1 & s2))
print(len(ans))
for i in ans:
    print(i,end=' ')