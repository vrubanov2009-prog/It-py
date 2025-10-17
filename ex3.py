def trirec(h, a):
    a = str(a)
    outp = []
    rown = []

    for i in range(h):
        for k in range(i + 1):
            rown.append(a)
        for l in range(h - i - 1):
            rown.append(" ")
        outp.append(rown.copy())
        rown.clear()

    for t in range(len(outp)):
        print(" ".join(outp[t]))

trirec(6, "*")


a = ""
for i in range(lines):
    for j in range(i):
        a = a + "* "
    print(a)
    a = ""