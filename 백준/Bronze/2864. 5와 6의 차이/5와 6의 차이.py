import sys

a, b = list(map(str, sys.stdin.readline().split()))

a = a.replace('6', '5')
b = b.replace('6', '5')
ans1 = int(a)+int(b)
a = a.replace('5', '6')
b = b.replace('5', '6')
ans2 = int(a)+int(b)
print(ans1, ans2)