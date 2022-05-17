#linha
# 0 1 2 coluna
# 3 4 5
# 7 8 9

#numeros = [["zero", "um", "dois"], ["tres", "quatro", "cinco"], ["seis", "sete", "oito"]]

#for i in range(3):
 #   for j in range(3):
  #      print(numeros[i][j], end=" ")
   #  print()
lin, op = int(input()),input()
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
        soma += matriz[lin][i]
else:
    for i in range(12):
        soma += matriz[lin][i]
    soma = soma/12
print("%.1f" % soma)