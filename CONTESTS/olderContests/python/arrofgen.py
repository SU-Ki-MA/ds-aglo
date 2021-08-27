a=int(input(""))
b=list(map(int, input().split()))
mai=0
mii=0
for i in range(len(b)):
  if(b[i]>b[mii]):
    mii=i
  if(b[i]<b[mai]):
    mai=i
mii=len(b)-mii-1
if(mai<0):
  mii=-mii
print(mai+mii)