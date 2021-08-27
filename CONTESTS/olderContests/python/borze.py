a=input("")
b,c,d="","",""
for e in a:
  b+=e+" "
b=b.split()
while(len(b)!=0):
  ret=b.pop(0)
  if(len(c)!=0):
    if(ret=='.'):
      d+='1'
      c=""
      continue
    if(ret=='-'):
      d+='2'
      c=""
      continue
  else:
    if(ret=='.'):
      d+='0'
      continue
    if(ret=='-'):
      c=ret
      continue
print(d)