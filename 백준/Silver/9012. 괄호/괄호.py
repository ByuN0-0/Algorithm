import sys

for _ in range(int(sys.stdin.readline())):
  arr = list(map(str, sys.stdin.readline().rstrip()))
  stack = []
  for k in arr:
    if k=='(':
      stack.append(1)
    elif k==')':
      if len(stack)==0:
        stack.append(-1)
        break
      else:
        stack.pop()
  if len(stack)>0:
    print("NO")
  elif len(stack)==0:
    print("YES")