# random functions
""" use secrets module for security related things, pseudo random is not ment for security """
import random
print(random.randint(0,9))
h=random.getrandbits(5)
print(bin(h))
h=bin(h)[2:]
print(h)
print([int(i) for i in h])
print(random.randrange(0,10,2))
a=[random.randint(0,9) for i in range(10)]
print(a)
random.shuffle(a)
print(a)
print(random.choice(a))
b=random.sample(a,3)
#
print([i in a for i in b])
#
print(set(a))

#b is the subset a is super set
check = all(i in b for i in a)
print(check)
check = all(i in a for i in b)
print(check)

check = any(i in b for i in a)
print(check)
check = all(i in a for i in b)
print(check)

print(random.random())
print(random.uniform(0.0,5.0))

#the output random floating point number is close to the third mode parameter
print(random.triangular(0,9,9))
print(random.triangular(0,9,1))
print(random.triangular(0,9,5))
print(random.triangular(0,9,6))

