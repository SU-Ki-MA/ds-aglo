""" S = n/2[2a + (n − 1) × d]
    an = a + (n − 1) × d 
    S  = n/2 (first term + last term)
    d = a2 – a1 = a3 – a2 = ……. = an – an – 1"""
import math
T=int(input())
A=[]
for i in range(T):
  n,no,a,d=list(map(int, input().split()))
  n2=math.floor(n/no)
  rem=n-(no*n2)
  S=(n2/2)*((2*a)+((n2-1)*d))
  an=a+(((n2+1)-1)*d)
  A.append((int(no*S))+(rem*an))
for i in A:
  print(i)