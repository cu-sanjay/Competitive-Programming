# cook your dish here
for i in range(int(input())):
    n,k=map(int,input().split())
    A=list(map(int,input().split()))
    if k<=n:
        for i in range(k):
            a=A[i%n]
            b=A[n-(i%n)-1]
            A[i%n]=a^b
    else:
        q=k//n
        if q%3==1:
            for i in range(n):
                a=A[i%n]
                b=A[n-(i%n)-1]
                A[i%n]=a^b
        elif q%3==2:
            for i in range(n):
                a=A[i%n]
                b=A[n-(i%n)-1]
                A[i%n]=a^b
            for i in range(n):
                a=A[i%n]
                b=A[n-(i%n)-1]
                A[i%n]=a^b
        else:
            for i in range(n):
                a=A[i%n]
                b=A[n-(i%n)-1]
                A[i%n]=a^b
            for i in range(n):
                a=A[i%n]
                b=A[n-(i%n)-1]
                A[i%n]=a^b
            for i in range(n):
                a=A[i%n]
                b=A[n-(i%n)-1]
                A[i%n]=a^b
        for i in range(k%n):
            a=A[i%n]
            b=A[n-(i%n)-1]
            A[i%n]=a^b
    print(*A)
