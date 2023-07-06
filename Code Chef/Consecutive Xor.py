# cook your dish here
for i in range(int(input())):
    n = int(input())
    l = list(map(int,input().split()))
    if n%2 == 1:
        print("Yes")
    else:
        s = 0
        for i in range(n):
            s = s^l[i]
        if s == 0:
            print("Yes")
        else:
            print("No")
