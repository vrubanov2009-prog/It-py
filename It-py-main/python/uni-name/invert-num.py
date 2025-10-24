def inv(a):
    b = 0
    a = str(a)
    num1 = list(a)
    for i in range(len(num1)):
        b = b + (int(num1[i]) * (10 ** i))
    return b

print(inv(9257))