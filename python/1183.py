op = input()
matriz = []
for i in range(12):
    matriz.append([])

for i in range(12):
    for j in range(12):
        x = float(input())
        matriz[i].append(x)
soma = 0
if op == 'S':
    for i in range(12):
        diagonal = i+1
        for j in range(diagonal,12):
            soma += matriz[i][j]
            #print(matriz[i][j], end=" ")
        #print()
else:
    media = 0
    for i in range(12):
        diagonal = i+1
        for j in range(diagonal, 12):
            soma += matriz[i][j]
            media += 1
    soma = soma/media
print("%.1f" % soma)