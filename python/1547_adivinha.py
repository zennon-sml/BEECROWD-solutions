n = int(input())
for i in range(n):
    cont, num = map(int, input().split())
    lista = list(map(int, input().split()))
    if num in lista:
        print(lista.index(num)+1)
    else:
        lista1 = []
        for i in lista:
            lista1.append(abs(num-i))
        print(lista1.index(min(lista1))+1)
