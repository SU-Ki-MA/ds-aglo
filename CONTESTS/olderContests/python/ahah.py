n=int(input(""))
arr=[]
def countx(list):
  x,y=0,0
  for i in range(0,len(list)-1,2):
    if(list[i]==1):
      x+=1
  for i in range(1,len(list),2):
    if(list[i]==1):
      y+=1
  return [x,y]

for i in range(n):
  b=int(input(""))
  c=input("").split()
  for i in range(len(c)):
    c[i]=int(c[i])
  arr.append(c)

for i in range(len(arr)):
  while(countx(arr[i])[0]!=countx(arr[i])[1]):
    for j in range(len(arr[i])):
      if(arr[i][j]==1):
        arr[i].pop(j)
        break

for i in arr:
  print(len(i))
  h=""
  for j in i:
    h+=str(j)+" "
  print(h)