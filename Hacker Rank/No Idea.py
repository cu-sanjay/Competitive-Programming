n,m = input().split()
arr = input().split()
set1 = set(input().split())
set2 = set(input().split())
hap = 0
for i in range(int(n)) :
    if arr[i] in set1 :
        hap += 1
    elif arr[i] in set2 :
        hap -= 1
        
print(hap)
