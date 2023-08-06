# cook your dish here
def solve(string):
    n = len(string)
    opt = [0 for i in range(len(string)+1)]
    opt[n] = 1
    opt[n-1] = 1
    for i in range(n-2,-1,-1):
        if string[i] != string[i+1]:
            opt[i] = opt[i+1]+opt[i+2]
        else:
            opt[i] = opt[i+1]
    return opt[0]% 998244353


for _ in range(int(input())):
    a = input()
    b = solve(a)
    print(b)
