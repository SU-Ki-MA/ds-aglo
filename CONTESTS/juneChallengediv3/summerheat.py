T=int(input())
a=[]
for i in range(T):
  xa,xb,Xa,Xb=list(map(int, input().split()))
  a.append(int((Xa/xa)+(Xb/xb)))
for i in a:
  print(i)