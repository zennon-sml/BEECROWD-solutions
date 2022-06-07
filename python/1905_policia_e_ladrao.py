def printMatriz(matriz):
    for i in matriz:
        for j in i:
            print("{} " .format(j), end="")
        print()
    print()
#i = linha
#j = coluna
#ckp = checkpoints
def resolverLabirinto(mat, i, j, ckp, count):
    count += 1
    if count > 20:
        return mat
    printMatriz(mat)
    if i == 2 and j == 2:#verifica se foi possivel chegar aos ladroes
        return mat
    else:
        #verificar os possiveis proximos passos
        #direita  [n][n+1]
        if j+1 < 5 and mat[i][j+1] == 2:
            ckp.append(i)
            ckp.append(j+1)
            mat[i][j+1] += 1
            j+=1
            resolverLabirinto(mat, i, j, ckp, count)
        #esquerda [n][n-1]
        elif j-1 > -1 and mat[i][j-1] == 3:
            ckp.append(i)
            ckp.append(j-1)
            mat[i][j-1] += 1
            j-=1
            resolverLabirinto(mat, i, j, ckp, count)
        #cima     [n-1][n]
        elif i-1 > -1 and mat[i-1][j] == 4:
            ckp.append(i-1)
            ckp.append(j)
            mat[i-1][j] += 1
            i-=1
            resolverLabirinto(mat, i, j, ckp, count)
        #baixo    [n+1][n]
        elif i+1 < 5 and mat[i+1][j] == 5:
            ckp.append(i+1)
            ckp.append(j)
            mat[i+1][j] += 1
            i+=1
            resolverLabirinto(mat, i, j, ckp, count)
        else:
            if mat[0][0] > 5 and i == 0 and j == 0:
                return mat
            if mat[0][0] > 5:
                ckp.pop(len(ckp)-1)
                ckp.pop(len(ckp)-2)
                j = ckp[-1]
                i = ckp[-2]
            if mat[i][j] > 5:
                mat[i][j] = 2
            else:
                ckp.pop(len(ckp)-1)
                ckp.pop(len(ckp)-2)
                j = ckp[-1]
                i = ckp[-2]
                mat[i][j] += 1
            resolverLabirinto(mat, i, j, ckp, count)



vezes = int(input())
while vezes:
    vezes -= 1
    matriz = []
    for i in range(5):
        val = list(map(int, input().split()))
        for j in range(5):
            if val[j] == 0:
                val[j] = 2
        matriz.append(val)
    if matriz[0][0] == 1:
        print("ROBBERS")
    else:
        checkpoints = [2, 2]
        teste = resolverLabirinto(matriz, 0, 0, checkpoints, 0)
        printMatriz(teste)
        # if resolverLabirinto(matriz, 0, 0, checkpoints):
        #     print("COPS")
        # else:
        #     print("ROBBERS")

