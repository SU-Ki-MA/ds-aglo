a=int(input())
e=[]

for i in range(a):
  b=int(input())
  c=list(map(int,input().split()))
  e.append(c)

for g in e:
  h=0
  for i in range(len(g)):
    p=g[i]
    if(p<0):
      p=-p
    for j in range(i+1,len(g)):
      f=g[j]
      if(f<0):
        f=-f
      if(f>g[i]):
        temp=g[i]
        g[i]=g[j]
        g[j]=temp

for o in e:
  c=[]
  d=0
  for i in range(5):
    if(o[i]<0):
      d+=1
  if(d%2!=0):
    min1=0
    for j in range(5):
      if(o[j]<0 and o[j]>o[min]):
        min1=j
    max1=0
    for k in range(len(o)):
      if(o[k]>0 and o[k]>o[max1]):
        max1=k
    o[min1]=o[max1]
  prod=1
  for i in range(5):
    prod*=o[i]
  print(prod)