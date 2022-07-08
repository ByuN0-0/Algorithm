t = int(input())
for i in range(t):
    h, w, n=map(int,input().split())

    floor = n%h
    room= n//h+1
    if floor == 0:
        floor = h
    if n%h==0:
        room-=1
    number = floor*100+room
    print(number)