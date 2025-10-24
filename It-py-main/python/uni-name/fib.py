def fib(a):
    v1 = 0
    v2 = 1
    v3 = 0
    for i in range(a + 1):
        v3 = v2 + v1
        v1 = v2
        v2 = v3
    return v3

print(fib(4))   