def printMatriz(matriz):
    for linha in range(5):
        for coluna in range(5):
            print("{} " .format(matriz[linha][coluna]), end="")
        print()

matriz = []
for i in range(5):#fazer matriz 
    caminho = list(map(int, input().split()))
    for j in range(5):
            if caminho[j] == 0:
                caminho[j] == 2
    matriz.append(caminho)
printMatriz(matriz)
