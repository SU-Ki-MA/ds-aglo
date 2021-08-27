x,y=0,0
for i in range(5):
  b=input("").split()
  for j in range(5):
    if(b[j]=='1'):
      x=i+1
      y=j+1
x=x-3;
y=y-3;
if(x<0):
  x=-x
if(y<0):
  y=-y
print(x+y)
a=[[],[],[]]
b=len(a[1])//2
a[b][b],a[i][j]=a[i][j],a[b][b]
a=tan(3.33)