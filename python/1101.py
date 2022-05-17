boole = False
while(boole == False):
    t = 0
    n,nn = map(int, input().split())
    if n > nn:
        temp = n
        n = nn
        nn = temp
    if n <= 0 or nn <= 0:
        boole = True
    if(n > 0 and boole != True):
        for i in  range(0, nn - n + 1):
            t += n+i
            print("{} " .format(n+i), end="")
            if nn - n == i:
                print("Sum={}" .format(t))