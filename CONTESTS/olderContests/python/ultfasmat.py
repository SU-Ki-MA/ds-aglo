a=input("")
b=input("")
c=""
for i in range(len(a)):
  c+=a[i]+" "
a=c
c=""
for i in range(len(b)):
  c+=b[i]+" "
b=c
a=a.split()
b=b.split()
c=[]
for i in range(len(a)):
  if(a[i]==b[i]):
    c.append(0)
  else:
    c.append(1)
d=""
for e in c:
  d+=str(e)
print(d)