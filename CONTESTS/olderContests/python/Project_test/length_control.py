def check(b):
    c=b
    if (len(c)!=10):
        print("phno must 10 digits")
        c=input("ENTER YOUR PHONE NUMBER : ")
        check(c)
    else:
        print("phno is correct")
        return c
a=input("ENTER YOUR PHONE NUMBER : ")
print(check(a))