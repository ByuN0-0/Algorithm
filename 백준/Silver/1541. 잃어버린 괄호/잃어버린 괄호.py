import sys

expression = sys.stdin.readline().strip().split("-")
ans = sum(map(int,expression[0].split("+")))

for i in range(1, len(expression)):
  ans -= sum(map(int,expression[i].split("+")))

print(ans)