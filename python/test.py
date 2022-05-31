def printMatriz(matriz):
    for linha in range(5):
        for coluna in range(5):
            print("{} " .format(matriz[linha][coluna]), end="")
        print()

matriz = []
for i in range(5):#fazer matriz 
    caminho = list(map(int, input().split()))
    matriz.append(caminho)
printMatriz(matriz)