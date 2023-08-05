t=int(input())
for i in range(t):
    n=int(input())
    if n<=2:
        print(0)
    else:
        ans=10
        for j in range(n-3):
            ans*=3
        ans*=(n-2)
        print(ans)
