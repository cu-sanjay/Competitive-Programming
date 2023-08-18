for _ in range(int(input())):

    n, m = [int(x) for x in input().split()]
    if n == 1:
        p = 1
    else:
        p = pow(2,n,10**9+7)-1
    ans = pow(p, m, 10**9 + 7)
    print(ans)
