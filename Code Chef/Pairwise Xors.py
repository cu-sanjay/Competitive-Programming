T = int(input())
for _ in range(T):
    X = int(input())
    if(X%2 != 0  or (X&(X-1)) == 0):
        print(-1)
    else:
        print(X//2,0,(X&(X-1))//2)
