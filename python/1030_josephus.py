def matar(lista, jump, i):
    while jump:
        if(lista[i]):
            jump -= 1
            i += 1
            if i > len(lista)-1:
                i = 0
    lista[i] = 0
    print(lista)
    return i
    

n = int(input())
for i in range(n):
    guys, jump = map(int, input().split())
    if jump > guys:
        jump = jump % guys
    lista = [1] * guys
    i = -1
    while(max(lista) > 0):
        i = matar(lista, jump, i)
    
    