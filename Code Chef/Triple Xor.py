# cook your dish here
from collections import Counter
import math
t=int(input())
for i in range(t):
    n,k=list(map(int,input().split()))
    n=2**n
    print((n-1)*(n-2))
