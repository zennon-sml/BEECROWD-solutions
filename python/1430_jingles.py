notas = {"W":1, "H":0.5, "Q":0.25, "E":1/8, "S":1/16, "T":1/32, "X":1/64}
while True:
    jingles = input().split('/')
    if jingles[0] == "*":
        break
    quant = 0
    for i in jingles:
        one = 0
        for j in i:
            one += notas[j]
        if one == 1:
            quant += 1
    print(quant)
    