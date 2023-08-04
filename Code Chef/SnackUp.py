for _ in range(int(input())):
    n=int(input())
    print(n)
    for i in range(n):
        print(n)
        for j in range(n):
            print(j+1 ,(i+j)%n +1 ,(i+j+1)%n + 1) 
