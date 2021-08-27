t=int(input())
import math
notrans=[]
sticks=1
coal=0
for i in range(t):
  b=list(map(int,input().split()))
  notrans.append(0)
  if(sticks<((b[1]*b[2])+1)):
    notrstick=math.ceil(((b[1]*b[2])+1)/(b[0]))
    sticks-=(notrstick)
    sticks+=(notrstick*(b[0]-1))
    notrans[i]+=notrstick
  sticks-=b[1]*b[2]
  notrans[i]+=coal
  coal=b[2]
  if(sticks<b[2]):
    notrstick2=math.ceil(b[2]/(b[0]))
    sticks-=notrstick2
    sticks+=(notrstick*(b[0]-1))
    notrans[i]+=notrstick2
  notrans[i]+=b[2]
  sticks=0
  coal=0
print(notrans)