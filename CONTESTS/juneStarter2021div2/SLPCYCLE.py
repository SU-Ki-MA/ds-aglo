for i in range(int(input())):
  a,b=list(map(int,input().split()))
  c=[i for i in list(map(len,input().split("1"))) if i!=0]
  for j in c:
    b=2*(b-j)
    if(b<=0):
      print("YES")
      break
  if(b>0):
    print("NO")