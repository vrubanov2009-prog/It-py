s1 = int(input())
s2 = s1

d = 2
e = 0

div = [0]
exp = []
f = []

while s1 > 1:

    while s1%d != 0:
        d = d + 1

    if d != div[-1]:
        div.append(d)
        exp.append(e)
        e = 1
    
    else:
        e = e + 1
    
    s1 = s1//d
    d = 2

exp.append(e)
exp.remove(0)
div.remove(0)

fact = []
c = len(div)
n = 0
while c > 0:
    if exp[n] != 1:
        f = str(str(div[n]) + "^" + str(exp[n]))
    
    else:
        f = str(div[n])
    
    fact.append(f)
    c = c - 1
    n = n + 1

print(str(s2) + " = " + " * ".join(fact))