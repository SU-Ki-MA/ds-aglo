a=[[1,1,1],[1,1,1],[1,1,1]]
b=[[0,0,0],[0,0,0],[0,0,0]]

def switch(arr,i,j):
  if(i==1):
    if(j==1):
      arr=swtop(arr,i,j)
      arr=swbot(arr,i,j)
      arr=swleft(arr,i,j)
      arr=swright(arr,i,j)
    elif(j<1):
      arr=swtop(arr,i,j)
      arr=swbot(arr,i,j)
      arr=swright(arr,i,j)
    else:
      arr=swtop(arr,i,j)
      arr=swbot(arr,i,j)
      arr=swleft(arr,i,j)
  elif(i<1):
    if(j==1):
      arr=swbot(arr,i,j)
      arr=swleft(arr,i,j)
      arr=swright(arr,i,j)
    elif(j<1):
      arr=swbot(arr,i,j)
      arr=swright(arr,i,j)
    else:
      arr=swbot(arr,i,j)
      arr=swleft(arr,i,j)
  else:
    if(j==1):
      arr=swtop(arr,i,j)
      arr=swleft(arr,i,j)
      arr=swright(arr,i,j)
    elif(j<1):
      arr=swtop(arr,i,j)
      arr=swright(arr,i,j)
    else:
      arr=swtop(arr,i,j)
      arr=swleft(arr,i,j)
  return arr

def swtop(arr,i,j):
  if(arr[i-1][j]==1):
    arr[i-1][j]=0
  else:
    arr[i-1][j]=1
  return arr

def swbot(arr,i,j):
  if(arr[i+1][j]==1):
    arr[i+1][j]=0
  else:
    arr[i+1][j]=1
  return arr

def swleft(arr,i,j):
  if(arr[i][j-1]==1):
    arr[i][j-1]=0
  else:
    arr[i][j-1]=1
  return arr

def swright(arr,i,j):
  if(arr[i][j+1]==1):
    arr[i][j+1]=0
  else:
    arr[i][j+1]=1
  return arr

for i in range(3):
  c=input("").split()
  for j in range(3):
    if(int(c[j])%2==0):
      c[j]=0
    else:
      c[j]=1
  b[i]=c

for i in range(len(b)):
  for j in range(len(b[i])):
    if(b[i][j]==1):
      if(a[i][j]==1):
        a[i][j]=0
      else:
        a[i][j]=1
      a=switch(a,i,j)

ar=["","",""]
for i in range(len(a)):
  st=""
  for e in a[i]:
    st+=str(e)
  ar[i]=st

for d in ar:
  print(d)