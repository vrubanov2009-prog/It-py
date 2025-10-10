s1 = input()
s2 = input()
s3 = input()

a1 = 0
a2 = 0
a3 = 0

if s1 > s2:
    a1 = a1 + 1
elif s1 < s2:
    a2 = a2 + 1
else:{}

if s2 > s3:
    a2 = a2 + 1
elif s2 < s3:
    a3 = a3 + 1
else:{}

if s1 > s3:
    a1 = a1 + 1
elif s1 < s3:
    a3 = a3 + 1
else:{}

if a1 == 0:
    print("min:"+s1)
    if a2 == 2:
        print("max:"+s2)
    else:
        print("max:"+s3)

elif a2 == 0:
    print("min:"+s2)
    if a1 == 1:
        print("max:"+s1)
    else:
        print("max:"+s3)

else:
    print("min:"+s3)
    if a1 == 2:
        print("max:"+s1)
    else:
        print("max:"+s2)