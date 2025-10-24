#im way too lazy to fix, srr#
def rect(h, w):
    fw = ""
    while w > 0:
        fw = fw + "*"
        w = w - 1
    
    while h > 0:
        print(fw)
        h = h - 1
rect (3, 7)