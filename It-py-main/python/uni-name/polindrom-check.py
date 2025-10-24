def pc(a):
    a = str(a)
    num1 = list(a)
    for i in range(len(num1)):
        if num1[i] != num1[len(num1) - 1 - i]:
            return "false"
    return "true"

print(pc(56785))