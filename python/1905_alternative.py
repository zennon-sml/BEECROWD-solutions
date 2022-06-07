def printMatriz(matriz):
    for i in matriz:
        for j in i:
            print("{} " .format(j), end="")
        print()
    print()

def resolverLabirinto(i, j):
    
    try:
        if i == 4 and j == 4:
            caminho[i][j] = 0
            return 1
        # print("{} -> {}" .format(i, j))
        # print(1)
        # printMatriz(caminho)        
        if matriz[i][j] == 0 and i < 5 and j < 5:
            caminho[i][j] = 0
            if resolverLabirinto(i, j+1):
                return 1
            if resolverLabirinto(i+1, j):
                return 1
            caminho[i][j] = 1
            # printMatriz(caminho)
            # print(2)
            # print("{} -> {}" .format(i, j))
            return 0
    except IndexError:
        # printMatriz(caminho)
        # print(3)
        # print("{} -> {}" .format(i, j))
        return 0
vezes = int(input())
while vezes:
    vezes -= 1
    matriz = []
    for i in range(5):
        val = list(map(int, input().split()))
        matriz.append(val)
    caminho = []
    for i in range(5):
        caminho.append([1,1,1,1,1])
    print(matriz[1][1])
    if matriz[0][0] == 1:
        print("ROBBERS")
    elif resolverLabirinto(0, 0):
        print("COPS")
    else:
        print("ROBBERS")
    print(">"*9)
    printMatriz(caminho)