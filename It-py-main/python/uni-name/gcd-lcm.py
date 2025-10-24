#only gcd because im lazy, and i know i could just start from one of#
#the 2 numbers and test each number and find the first that mod a and b is 0#

def fact(s1):
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
    fact = [div, exp]
    return fact

def min(a, b):

    if a > b:
        return b
    
    else:
        return a

def max(a, b):

    if a > b:
        return a
    
    else:
        return b
    
def gcd(a, b):

    if len(fact(a)[0]) > len(fact(b)[0]):
        s1 = b
        s2 = a

    else:
        s1 = a
        s2 = b

    div_s1 = fact(s1)[0]
    exp_s1 = fact(s1)[1]
    div_s2 = fact(s2)[0]
    exp_s2 = fact(s2)[1]

    v1 = len(div_s1)
    v2 = 0
    gcd_div = []
    gcd_exp = []

    while v1 > 0:
        
        if div_s1[v2] in div_s2:
            gcd_div.append(div_s1[v2])
            gcd_exp.append(min(exp_s1[v2], exp_s2[div_s2.index(div_s1[v2])]))
        
        else: 
            {}

        v1 = v1 - 1
        v2 = v2 + 1

    fact_gcd = [gcd_div, gcd_exp]
    
    return fact_gcd

a = int(input())
b = int(input())

l1 = gcd(a, b)[0]
l2 = gcd(a, b)[1]

m = 1
v1 = len(l1)
v2 = 0

while v1 > 0:
    m = m * (l1[v2] ** l2[v2])
    v1 = v1 - 1
    v2 = v2 + 1

print(m)