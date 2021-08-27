a=input("").split()
for i in range(2):
  a[i]=int(a[i])
b=input("")
c=[]
for d in b:
  c.append(d)
for i in range(a[1]):
  for j in range(len(c)):
    if((j==len(b)-1)==False):
      if(b[j]=='B' and b[j+1]=='G'):
        c[j]='G'
        c[j+1]='B'
  b=""
  for e in c:
    b+=e
d=""
for e in c:
  d+=e;
print(d)