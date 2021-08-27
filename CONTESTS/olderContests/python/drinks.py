a=int(input())
b=list(map(int,input().split()))
c=0
for i in b:
  c+=i
c/=a
print(c)