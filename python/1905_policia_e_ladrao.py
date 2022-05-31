#será verificado em cada casa se é possivel se mover para alguma direção
#se não volta-se para casa anterior e verificase se há outra opção de movimento
#também verifica-se se a proxima casa não é uma casa invalido indicado por 5
#1 direita
#2 esquerda
#3 cima
#4 baixo
#5 caminho invalido
#checkpoints = posição i, j e movimentos
def printMatriz(matriz):
    for i in range(5):
        for j in range(5):
            print("{} " .format(matriz[i][j]), end="")
        print()

def fazerCheckPoints(matriz):
    checkpoints = []
    for i in range(5):
        for j in range(5):
            if matriz[i][j] == 0:
                posicao = [i, j, 1]
                checkpoints.append(posicao)
    return checkpoints

def andarCasas(matriz, casa, x):
    #1 direita
    if matriz[casa[x][0]][casa[x][1]+1] == 0:
        casa[x][2] += 1
        x += 1
        return andarCasas(matriz, casa, x)
    #2 esquerda
    elif matriz[casa[x][0]][casa[x][1]-1] == 0:
        casa[x][2] += 1
        x += 1
        return andarCasas(matriz, casa, x)
    #3 cima
    elif matriz[casa[x][0]-1][casa[x][1]] == 0:
        casa[x][2] += 1
        x += 1
        return andarCasas(matriz, casa, x)
    #4 baixo
    elif matriz[casa[x][0]+1][casa[x][1]] == 0:
        casa[x][2] += 1
        x += 1
        return andarCasas(matriz, casa, x)
        

#funcao principal
n = int(input())
for vezes in range(n):
    matriz = []
    for i in range(5):#fazer matriz 
        caminho = list(map(int, input().split()))
        matriz.append(caminho)
    checkpoints = fazerCheckPoints(matriz)
    printMatriz(matriz)

