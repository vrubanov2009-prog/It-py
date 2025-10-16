#i know this could've done in an easier way ;-;#

def l_brk(a):
    a = str(a)
    n = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']

    list1 = list(a)
    listv1 = []
    v1 = 0
    v2 = 0
    brk = []
    
    while list1 != []:
        listv1 = []
        if list1[0] in n:
            while list1[0] in n:
                listv1.append(int(list1[0]))
                list1.pop(0)
                if len(list1) == 0:
                    break
                else:
                    {}
            v1 = len(listv1)
            while v1 > 0:
                v2 = v2 + (listv1[0] * (10 ** (v1 - 1)))
                v1 = v1 - 1
                listv1.pop(0)
            brk.append(v2)
            v2 = 0
        else:
            list1.pop(0)
    return brk

a = input()
print(l_brk(a))