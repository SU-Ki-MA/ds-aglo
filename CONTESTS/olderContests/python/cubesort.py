import math
t=int(input())
op=[]
for i in range(t):
  no=int(input())
  tst=list(map(int,input().split()))
  notst=0
  for j in range(len(tst)):
    k=j+1
    temp=k
    while(k<len(tst)):
      if((tst[j]<tst[k])and(tst[j]<tst[temp])):
        temp=k
      k+=1
    if(temp<len(tst)):
      if(tst[temp]<tst[j]):
        notst+=1
        tst[j],tst[temp]=tst[temp],tst[j]
  if(math.ceil((no*(no-1)/2)-1)>=notst):
    op.append("YES")
  else:
    op.append("NO")
for i in op:
  print(i)