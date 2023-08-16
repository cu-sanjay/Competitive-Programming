def chef(num, a):
    a.sort(reverse=True)
    m = 0
    c = 1
    n = s = 0
    for i in v:
        s += i
        if s * c > m:
            m = s * c
            c += 1
        else:
            n += i
    return m + n
for _ in range(int(input())):
    n = int(input())
    v = list(map(int, input().split()))
    print(chef(n, v))
