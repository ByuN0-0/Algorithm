import sys

a = int(sys.stdin.readline())
ans = ""
for _ in range(a//4):
    ans+="long "
ans+="int"
print(ans)