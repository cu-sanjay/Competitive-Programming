# cook your dish here
for _ in range(int(input())):
    S, SG, FG, D, T = map(int, input().split())
    SO = S + (((D * 50) / T) * 18 / 5)
    if abs(SO - SG) < abs(SO - FG): print('SEBI')
    elif abs(SO - SG) > abs(SO - FG): print('FATHER')
    else: print('DRAW')
