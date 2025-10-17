def chkb(h, w, a, b):
    a = str(a)
    b = str(b)

    for i in range(h):
        for j in range(w):
            if (i + j)%2 == 0:
                print(a, end = " ")
            else:
                print(b, end = " ")
        print("")

chkb(5, 5, "#", ".")