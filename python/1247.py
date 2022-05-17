p = int(input())

cont = 0
cartas = []
fim = []

for i in range(1, p+1):
    cartas.append(i)
    fim.append(i)

while True:

    l1 = fim[:len(cartas)//2]
    l2 = fim[len(cartas)//2:]

    cont2 = 0
    for j in range(len(cartas)//2):
        fim[cont2] = l2[j]
        fim[cont2+1] = l1[j]
        cont2 += 2

    if fim == cartas:
        cont += 1
        print(cont)
        break
    else:
        cont += 1
