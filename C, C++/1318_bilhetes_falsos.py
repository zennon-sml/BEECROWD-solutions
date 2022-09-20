while True:
    n, n1 = map(int, input().split())
    if n == 0 and n1 == 0:
        break
    valores = [0]*n1
    vrau = input().split()
    for i in vrau:
        valores[int(i)-1] += 1
    total = 0
    for i in valores:
        if i > 1:
            i = 2
            total += 1
    print(total)
    
