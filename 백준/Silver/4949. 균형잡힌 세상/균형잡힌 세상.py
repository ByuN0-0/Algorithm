import sys

def solve():
  while True:
    arr = list(map(str, sys.stdin.readline().rstrip()))
    if arr == ['.']:
      break
    stack = []
    for k in arr:
      if k=='(':
        stack.append(1)
      elif k=='[':
        stack.append(2)
      elif k==')':
        if len(stack)==0:
          stack.append(-1)
          break
        else:
          if stack[-1]==1:
            stack.pop()
          else:
            stack.append(-1)
            break
      elif k==']':
        if len(stack)==0:
          stack.append(-1)
          break
        else:
          if stack[-1]==2:
            stack.pop()
          else:
            stack.append(-1)
            break
    if len(stack)>0:
      print("no")
    elif len(stack)==0:
      print("yes")
solve()