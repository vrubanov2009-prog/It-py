s1 = int(input())
s2 = int(input())
m = 0
if s2 > 0:
    while s2 >= 1:
        m = m + s1
        s2 = s2 - 1
elif s2 < 0:
    while s2 <0:
        m = m - s1
        s2 = s2 + 1
    else:{}
print(m)