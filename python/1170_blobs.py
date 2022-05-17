n = int(input())
for i in range(n):
    dias = 0
    valor = float(input())
    while(True):
        if valor <= 1.0:
            break
        valor = valor/2
        dias += 1
    print("{} dias" .format(dias))

