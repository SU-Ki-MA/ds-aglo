
import math
t=int(input())
op=[]
for i in range(t):
  a=list(map(int,input().split()))
  if(a[0]<3):
    op.append(1)
    continue
  else:
    b=math.ceil((a[0]-2)/a[1])
    op.append(1+b)
for i in op:
  print(i)