def circle(r, a):
    a = str(a)

    for i in range (2 * r + 1):
        for j in range (2 * r + 1):
            if ((i - r) ** 2) + ((j - r) ** 2) <= (r + 0.17) ** 2:
                print(a, end = (" "))
            else:
                print(" ", end = (" "))
        print()

circle(7, "#")