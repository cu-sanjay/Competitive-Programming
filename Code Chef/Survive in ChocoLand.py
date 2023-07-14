# cook your dish here
for _ in range(int(input())):
    n, k, s = map(int, input().split())
    
    if (k > n) or (6*n < 7*k and s > 6): print(-1); continue
    c = s*k // n 
    if s*k % n  > 0: c += 1
    print(c)
