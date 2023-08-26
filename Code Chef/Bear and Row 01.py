# cook your dish here
for _ in range(int(input())):
    s=(input())
    time=0
    count=0
    done=False
    for i in s:
        if i=="1":
            count+=1
            done=True
        else:
            if done:
                time+=count
                #print(time)
                done=False
            time+=count
            #print(time)
    print(time)
                
