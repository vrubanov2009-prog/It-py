def frame(h, w, b):
    b = str(b)
    outp = []
    rown = []
    for i in range(h):
        if i == 0 or i == h - 1:
            for j in range(w):
                rown.append(b)
        else:
            for j in range(w):
                if j == 0 or j == w - 1:
                    rown.append(b)
                else:
                    rown.append(" ")
        outp.append(rown.copy())
        rown.clear()
    for k in range(len(outp)):
        print(" ".join(outp[k]))
frame(8, 6, "&")