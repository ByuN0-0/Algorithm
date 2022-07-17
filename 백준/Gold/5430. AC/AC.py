import sys
for _ in range(int(sys.stdin.readline())):
  p = sys.stdin.readline().strip()
  n = int(sys.stdin.readline())
  a = sys.stdin.readline().strip()
  if n==0:
    x=[]
  else:
    x = list(map(int,a.strip('[]').split(',')))
  error = False
  isReverse= False
  for f in p:
    try:
      if f == "D":
        if isReverse:
          x.pop()
        else:
          x.pop(0)
      elif f =="R":
        isReverse = not isReverse
    except:
      error=True
      break
  if isReverse and len(x)>0:
    x.reverse()

  if error:
    print("error")
  elif len(x)==0:
    print('[]')
  else:
    print('[',end='')
    for i in range(len(x)-1):
      print(x[i],end='')
      print(',',end='')
    else:
      print(x[-1],end='')
      print(']',end='\n')