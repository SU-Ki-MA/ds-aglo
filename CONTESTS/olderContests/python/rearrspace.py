import math
ip_sentence=input()
midarr=ip_sentence.split()
no_words=len(midarr)
no_space=0
for i in ip_sentence:
  if(i==' '):
    no_space+=1
if(no_words!=1):
  sp=math.floor(no_space/(no_words-1))
  trail_sp=math.floor(no_space-((no_words-1)*sp))
  opstr=""
  for i in midarr:
    opstr+=i
    if(len(midarr)==len(opstr.split())):
      opstr+=' '*int(trail_sp)
      break
    else:
      opstr+=' '*int(sp)
  print(opstr)
elif(no_space!=0):
  print(midarr[0]+(' '*no_space))
else:
  print(midarr[0])    