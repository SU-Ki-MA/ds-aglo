def stringop(a,b):
  if(len(a)>0):
    z=a.pop(0)
    if(int(z)==0):
      return stringop(a,b[:len(b)//2])
    elif(int(z)==1):
      return stringop(a,b[len(b)//2:])
  else:
    return b

stringi='abcdefghijklmnop'
op=[]
t=int(input())
for i in range(t):
  n=int(input())
  s=input()
  b=list(map(list,[s[k:k+4]for k in range(0,len(s),4)]))
  m=[]
  for k in b:
    m.append(stringop(k,stringi))
  n=''
  for o in m:
    n+=o
  op.append(n)
for a in op:
  print(a)