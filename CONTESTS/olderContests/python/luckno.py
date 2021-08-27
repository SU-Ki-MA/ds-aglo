def luck(a):
  c=0
  for e in a:
    if(e==7):
      c+=1
    if(e==4):
      c+=1
  return c

a=input("")
h=[]
for i in range(len(a)):
  h.append(int(a[i]))
a=h
b=luck(a)
c=str(b)
e=0
for d in c:
  if(d=='4' or d=='7'):
    continue
  else:
    e=1
if(e==1):
  print("NO")
else:
  print("YES")
