# cook your dish here
for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    arr = list(set(arr))
    if len(arr) == 1: print(0)
    else:
        arr.sort()
        print(arr[-2])
