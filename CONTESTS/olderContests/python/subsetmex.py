a=int(input())
e=[]

def cont(no,arr):
  arr=list(set(arr))
  for i in range(len(arr)):
    if(no==arr[i]):
      return True

for i in range(a):
  b=int(input())
  c=list(map(int,input().split()))
  e.append(c)

for i in range(len(e)):
  e[i].sort()

for i in e:
  f=[]
  g=[]
  for j in range(len(i)):
    if(cont(i[j],f)):
      g.append(i[j])
    else:
      f.append(i[j])
  no1=0
  no2=0
  for i in range(101):
    if(cont(i,f)):
      no1=i+1
    else:
      break
  for i in range(101):
    if(cont(i,g)):
      no2=i+1
    else:
      break
  print(no1+no2)