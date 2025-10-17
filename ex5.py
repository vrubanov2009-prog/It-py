def romb(h, a):
    a = str(a)
    for i in range(h):
        v1 = abs((i + 1) - ((h + 1)/2))
        for j in range(h):
            if j > v1 - 1 and j < h - v1:
                print(a, end = " ")
            else:
                print(" ", end = " ")
        print("")

romb(11, "#")