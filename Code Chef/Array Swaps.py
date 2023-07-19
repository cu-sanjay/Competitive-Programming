
import bisect

n,m=map(int,input().split())
a=list(map(int,input().split()))
b=list(map(int,input().split()))
a.sort()
b.sort()
ans=0
for i in b:
    ind=bisect.bisect_right(a,i)
    if(ind==0 and a[ind]>i):
        ans=ans+n
print(ans)
