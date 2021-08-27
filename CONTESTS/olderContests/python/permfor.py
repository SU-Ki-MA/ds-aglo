def rev(i):
  i.reverse()
  return i

def print_iterator(it):
  for x in it:
    print(x,end=' ')
  print('')

a=int(input(""))
arno=[]
arar=[]
opar=[]
for i in range(a):
  b=int(input(""))
  c=input("").split()
  d=[]
  for e in c:
    d.append(int(e))
  arno.append(b)
  arar.append(d)

for a in arar:
  opar.append(rev(a))

for a in opar:
  mapi=map(lambda x: x,a)
  print_iterator(mapi)
