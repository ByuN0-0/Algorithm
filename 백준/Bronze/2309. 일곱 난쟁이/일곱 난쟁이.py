import sys


def quick_sort(arr):
    def sort(low, high):
        if high <= low:
            return
        mid = partition(low, high)
        sort(low, mid-1)
        sort(mid, high)

    def partition(low, high):
        pivot = arr[(low+high)//2]
        while low <= high:
            while arr[low] < pivot:
                low += 1
            while arr[high] > pivot:
                high -= 1
            if low <= high:
                arr[low], arr[high] = arr[high], arr[low]
                low, high = low+1, high-1
        return low
    return sort(0, len(arr)-1)


arr = []
for _ in range(9):
    arr.append(int(sys.stdin.readline()))
quick_sort(arr)
sum_arr = sum(arr)
for i in range(8):
    isbreak = False
    for j in range(1, 9):
        temp = sum_arr
        if ((temp - arr[i] - arr[j]) == 100):
            a = arr[i]
            b = arr[j]
            arr.remove(a)
            arr.remove(b)
            isbreak = True
            break
    if isbreak:
        break
for i in arr:
    print(i)
