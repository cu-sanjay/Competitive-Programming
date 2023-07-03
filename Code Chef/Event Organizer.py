for t in range(int(input())):
    n = int(input())
    ev = []
    for i in range(n):
        start, end, comp = map(int, input().split())
        ev.append([start, end, comp])
    
    dp = [0] * 49
    for i in range(1, 49):
        val = dp[i-1]
        for j in range(n):
            if ev[j][1] == i:
                val = max(val, ev[j][2] + dp[ev[j][0]])
        dp[i] = val
    print(dp[48])
