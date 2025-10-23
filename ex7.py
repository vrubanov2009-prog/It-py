def xnplus(h, a):
    a = str(a)
    v1 = (h + 1)/2 - 1

    for i in range(h):
        for j in range(h):
            if i == j or i + j == h - 1 or i == v1 or j == v1:
                print(a, end = " ")
            else:
                print(" ", end = " ")
        print("")

xnplus(9, "#")