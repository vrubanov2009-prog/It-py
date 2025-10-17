def frame(h, w, b):
    b = str(b)
    outp = []
    rown = []
    fl = []
    ml = []
    for i in range(h):
        if i == 0 or i == h - 1:
            for i in range(w):
                outp.append(b)
            outp.append(rown)
            rown.clear()
        else:
            for i in range(w):
                if i == 0 or i == -1:
                    rown.append(b)
                else:
                    rown.append(" ")
            outp.append(rown)
            outp.clear