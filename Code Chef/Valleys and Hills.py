n  = int(input())
for i in range (n):
    x,y = map(int, input().split(' '))
    if x == y:
        ln = 2*x + 2
        strng = '01'*(x+1)
    elif abs(x-y) == 1:
        ln = min(x,y)*2+2+1
        if x > y:
            strng = '01'*(y+1)+'0'
        else:
            strng = '10'*(x+1)+'1'
            
    else:
        ln = (min(x,y)*2+2)+1+(max(x,y)-min(x,y)-1)*3
        if x>y:
            strng = '01'*(y+1)+'001'*(x-y-1)+'0'
        else:
            strng = '10'*(x+1)+'110'*(y-x-1)+'1'
        
    print(ln)
    print(strng)
    
