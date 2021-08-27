a=input("")
b,c=0,0
for d in a:
  if(ord(d)>=97 and ord(d)<=122):
    b+=1
  else:
    c+=1
if(b>=c):
  a=a.lower()
else:
  a=a.upper()
print(a)