z=int(input(""))
a=input("")
c=0
for i in range(1,len(a),1):
  if(a[i-1]==a[i]):
    c+=1
print(c)