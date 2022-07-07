import sys
deque = []
for _ in range(int(sys.stdin.readline())):
  com = list(map(str,sys.stdin.readline().split()))
  if com[0] == 'push_front':
    deque = [int(com[1])]+deque
  elif com[0] == 'push_back':
    deque.append(int(com[1]))
  elif com[0] == 'pop_front':
    if len(deque)>0:
      print(deque.pop(0))
    else:
      print(-1)
  elif com[0] == 'pop_back':
    if len(deque)>0:
      print(deque.pop())
    else:
      print(-1)
  elif com[0] == 'size':
    print(len(deque))
  elif com[0] == 'empty':
    if len(deque)>0:
      print(0)
    else:
      print(1)
  elif com[0] == 'front':
    if len(deque)>0:
      print(deque[0])
    else:
      print(-1)
  elif com[0] == 'back':
    if len(deque)>0:
      print(deque[-1])
    else:
      print(-1)