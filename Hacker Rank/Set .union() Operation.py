# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())
N = set(map(int,input().split()))
m = int(input())
M = set(map(int,input().split()))
print(len(N.union(M)))
