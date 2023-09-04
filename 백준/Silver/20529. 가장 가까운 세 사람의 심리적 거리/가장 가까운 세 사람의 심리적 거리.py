import sys
from itertools import combinations
strmbti = ["ISTJ", "ISFJ", "INFJ", "INTJ", "ISTP", "ISFP", "INFP",
           "INTP", "ESTP", "ESFP", "ENFP", "ENTP", "ESTJ", "ESFJ", "ENFJ", "ENTJ"]


def distance2(a, b):
    return sum(int(a[i] != b[i])for i in range(4))


def distance(a, b, c):
    return sum(int(a[i] != b[i]) + int(b[i] != c[i]) + int(c[i] != a[i])for i in range(4))


for _ in range(int(sys.stdin.readline())):  # 테스트케이스
    arr = [0]*16
    n = int(sys.stdin.readline())
    mbti = list(map(str, sys.stdin.readline().strip().split(" ")))
    for i in range(n):
        if mbti[i] == strmbti[0]:
            arr[0] += 1
        elif mbti[i] == strmbti[1]:
            arr[1] += 1
        elif mbti[i] == strmbti[2]:
            arr[2] += 1
        elif mbti[i] == strmbti[3]:
            arr[3] += 1
        elif mbti[i] == strmbti[4]:
            arr[4] += 1
        elif mbti[i] == strmbti[5]:
            arr[5] += 1
        elif mbti[i] == strmbti[6]:
            arr[6] += 1
        elif mbti[i] == strmbti[7]:
            arr[7] += 1
        elif mbti[i] == strmbti[8]:
            arr[8] += 1
        elif mbti[i] == strmbti[9]:
            arr[9] += 1
        elif mbti[i] == strmbti[10]:
            arr[10] += 1
        elif mbti[i] == strmbti[11]:
            arr[11] += 1
        elif mbti[i] == strmbti[12]:
            arr[12] += 1
        elif mbti[i] == strmbti[13]:
            arr[13] += 1
        elif mbti[i] == strmbti[14]:
            arr[14] += 1
        elif mbti[i] == strmbti[15]:
            arr[15] += 1
    max = -1
    index = []
    for j in range(16):
        if arr[j] >= 3:
            print("0")
            max = -1
            break
        if (arr[j]) > max:
            max = arr[j]
        if arr[j] == 2:
            index.append(j)
    if max == -1:
        continue
    elif max == 2:
        arr2 = []
        for k in index:
            for l in range(n):
                value = distance2(strmbti[k], mbti[l])
                if value != 0:
                    arr2.append(value)
        setmbti = set(mbti)
        if len(setmbti) < 3:
            print(min(arr2)*2)
            continue
        trimbti = list(combinations(setmbti, 3))
        ansarr = []
        for i in range(len(trimbti)):
            ansarr.append(
                distance(trimbti[i][0], trimbti[i][1], trimbti[i][2]))
        print(min(min(ansarr), min(arr2)*2))
    else:
        setmbti = set(mbti)
        trimbti = list(combinations(setmbti, 3))
        ansarr = []

        for i in range(len(trimbti)):
            ansarr.append(
                distance(trimbti[i][0], trimbti[i][1], trimbti[i][2]))

        print(min(ansarr))
