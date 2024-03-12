import sys

n = int(sys.stdin.readline())
length = int(sys.stdin.readline())
line = sys.stdin.readline()
cnt = 0
ans = 0
for i in range(0,(length-(2*n))):
  for j in range(0,2*n+1):
    #print("i는 ", i)
    #print("j는 ", j)
    if i+j<length:
      #print("i+j<length임")
      if j%2==0: # 문자열이 I일때
        #print("j%2==0임")
        if line[i+j]=="I":
          cnt+=1
        else:
          break
      else: #문자열이 O일때
        #print("j%2==1임")
        if line[i+j]=="O":
          cnt+=1
        else:
          break
    #print("\n")
  if cnt==(2*n+1):
    ans+=1
  cnt = 0
print(ans)