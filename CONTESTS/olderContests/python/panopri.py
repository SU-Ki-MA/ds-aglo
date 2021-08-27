a=input("").split()
for i in range(len(a)):
  a[i]=int(a[i])
b=[]
for n in range(2,100):
  for i in range(2,n):
    if(n%i==0):
      break
  else:
    b.append(n)
for i in range(len(b)):
  if(a[0]==b[i]):
    if(b[i+1]==a[1]):
      f=0
      break
    else:
      f=1
if(f==1):
  print("NO")
else:
  print("YES")