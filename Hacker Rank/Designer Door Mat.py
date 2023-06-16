h, w = map(int, input().split())
m = h // 2
for i in range(m, -m-1, -1):
    if i == 0:
        print('WELCOME'.center(w, '-'))
    else:
        n = '.|.' * (len(range(m, abs(i), -1)) + len(range(abs(i), m+1)))
        print(n.center(w, '-'))
