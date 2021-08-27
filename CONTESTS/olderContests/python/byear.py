a=int(input(""))
a+=1
while(True):
  b=[]
  for c in str(a):
    b.append(int(c))
  b=set(b)
  if(len(b)==4):
    print(a)
    break
  a+=1