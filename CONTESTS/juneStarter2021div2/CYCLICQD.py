T=int(input())
for i in range(T):
  A,B,C,D=list(map(int,input().split()))
  if((A+C)==(B+D)==180):
    print("YES")
  else:
    print("NO")