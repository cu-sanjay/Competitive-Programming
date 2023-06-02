def solve (S, k):
    a=0      
    for i in S:           
        if i==k :           
            a+=1       
    return a
    pass

T = int(input())
for _ in range(T):
    S = input()
    k = input()

    out_ = solve(S, k)
    print (out_)