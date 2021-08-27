for i in range(int(input())):
  dicti={}
  for j in range(3*int(input())):
    a,b=list(map(str,input().split()))
    if(a in dicti):
      dicti[a]+=int(b)
    else:
      dicti[a]=int(b)
  print(*sorted(dicti.values()))
