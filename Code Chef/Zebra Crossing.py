# cook your dish here
t=int(input())
for x in range(t):
    n,k=map(int,input().split())
    z=input()
    c=0
    for i in range(n-1):
        if z[i]!=z[i+1]:
            c=c+1 
    if c<k:
        print("-1")
    elif k%2==0:
        for j in range(n-1,-1,-1):
            if z[j]==z[0]:
                print(j+1)
                break
    else:
        for j in range(n-1,-1,-1):
            if z[j]!=z[0]:
                print(j+1)
                break
            
