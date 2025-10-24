def frames(h):
    for i in range(h):
        for j in range(h):
            vi = int(abs(i - (h - 1)/2))
            vj = int(abs(j - (h - 1)/2))
            if vi % 2 == h % 2 or vj % 2 == h % 2:
                print(" ", end = " ")
            else:
                print("a", end = " ")
        print()
frames(8)