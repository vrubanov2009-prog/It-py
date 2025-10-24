def csum(a, b):
    a[0] = int(a[0])
    a[1] = int(a[1])
    b[0] = int(b[0])
    b[1] = int(b[1])
    c = []
    c.append(a[0] + b[0])
    c.append(a[1] + b[1])
    return c


def spiral(h, a):
    a = str(a)
    outp = []
    rown = []
    for i in range(h):
        for j in range(h):
            if i == 0 or j == 0 or i == h - 1 or j == h - 1:
                rown.append(a)
            else:
                rown.append(" ")
        outp.append(rown.copy())
        rown.clear()
    
    outp[0][1] = " "
    outp[1][2] = a
    cp = [1, 2]
    md = [[1, 0], [0, 1], [-1, 0], [0, -1]]
    cd = [[2, 0], [0, 2], [-2, 0], [0, -2]]
    vd = 0
    cv = 0
    while cv == 0:
        cp = csum(cp, md[vd])
        if outp[csum(cp, cd[vd])[0]][csum(cp, cd[vd])[1]] == a:
            vd = (vd + 1)%4
            if outp[csum(cp, cd[vd])[0]][csum(cp, cd[vd])[1]] == a:
                cv = 1
            elif outp[csum(cp, md[vd])[0]][csum(cp, md[vd])[1]] == a:
                break
            else:
                {}
        else:
            {}
        outp[cp[0]][cp[1]] = a
    for i in range(len(outp)):
        print(*outp[i])

spiral(16, "#")