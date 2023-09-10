# cook your dish here
digit=int(input())
for d in range(digit):
  i,c=map(int,input().split())
  if 9999<i*c<100000:print("yes")
  else: print("no")
