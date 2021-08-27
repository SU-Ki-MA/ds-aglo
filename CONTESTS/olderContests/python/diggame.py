t=int(input())
matno=[]
matdig=[]
output=[]
for i in range(t):
  matno.append(int(input()))
  matdig.append(input())
for i in range(len(matno)):
  no=matno[i]
  mat=matdig[i]
  dp=[[],[]]
  for j in range(0,no,2):
    dp[0].append(mat[j])
  for j in range(1,no,2):
    dp[1].append(mat[j])
  if(len(dp[0])>len(dp[1])):
    z=False
    for j in dp[0]:
      if(int(j)%2!=0):
        output.append(1)
        z=True
        break
    if(z==False):
      output.append(2)
  else:
    a,b=0,0
    for j in dp[0]:
      if(int(j)%2!=0):
        a+=1
    for j in dp[1]:
      if(int(j)%2==0):
        b+=1
    if(a>b):
      output.append(1)
    else:
      output.append(2)
for i in output:
  print(i)
