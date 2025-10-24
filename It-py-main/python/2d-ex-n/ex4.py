def centrtrig(h, a):
    a = str(a)
    
    for i in range(h):
        for j in range(h + h + 1):
            if j + 1 > h - i and j + 1 < h + i:
                print(a + " ", end = "")
            else: 
                print("  ", end = "")
        print("")

centrtrig(10, "#")