def fframe(y, x, w, a):
    a = str(a)

    for i in range(y):
        for j in range(x):
            if abs(i + 1 - ((y + 1) / 2)) >= (y / 2) - w or abs(j + 1 - ((x + 1) / 2)) >= (x / 2) - w:
                print(a, end = " ")
            else:
                print(" ", end = " ")
        print("")

fframe(11, 11, 3, "#")