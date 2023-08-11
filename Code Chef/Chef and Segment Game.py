t = int(input())

for i in range(t):
    x, k = map(int, input().split())
    x1, y1 = 2, 1 
    while x1 <= k:
        x1, y1 = x1 * 2, x1 
    print(x / x1 * (1 + 2 * (k - y1)))
