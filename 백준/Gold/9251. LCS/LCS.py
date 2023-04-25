import sys

char1 = list(map(str,sys.stdin.readline().strip()))
char2 = list(map(str,sys.stdin.readline().strip()))

char1.insert(0,"0")
char2.insert(0,"0")

arr = [[0 for _ in range(len(char2))]for _ in range(len(char1))]

for i in range(1,len(char1)):
  for j in range(1,len(char2)):
    if (char1[i]==char2[j]):
      arr[i][j]=arr[i-1][j-1]+1
    else:
      arr[i][j] = max(arr[i-1][j],arr[i][j-1])

print(arr[len(char1)-1][len(char2)-1])