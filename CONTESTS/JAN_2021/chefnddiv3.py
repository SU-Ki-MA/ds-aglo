import math
t=int(input())
oparr=[]
for i in range(t):
  n, k, d=list(map(int, input().split()))
  a=sum(list(map(int,input().split())))
  b=math.floor(a/k)
  if(b<d):
    oparr.append(b)
  else:
    oparr.append(d)
for i in oparr:
  print(i)