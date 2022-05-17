n = int(input())
n1 = int(n/2)
lista = []
lista2 = []
for i in range(n):
    lista.append(i)
    lista2.append(i)
lista1 = []
i = 0
valor = 0
valor1 = 0
for i in range(0, n):
    for j in range(0, n):
        # print(j)
        # 0 1 2  # 3 4 5
        # 3 0 4 # 1 5 2
        # 1 3 5 # 0 2 4
        # 0 1 2 3 4 5
        a = lista[j]
        lista[j] = lista[j+n1]
        lista[j+1] = a
        valor += 2
        print(lista2, " ", lista, " ", valor)
    if lista2 == lista:
        valor1 = valor

print(valor1)
