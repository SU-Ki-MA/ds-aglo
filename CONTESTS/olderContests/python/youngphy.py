a=int(input(""))
b=[0,0,0]
for i in range(a):
  d=input("").split()
  for i in range(3):
    b[i]+=int(d[i])
if(b[0]==b[1]==b[2]==0):
  print("YES")
else:
  print("NO")