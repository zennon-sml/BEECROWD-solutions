
city = 0
while True:
    city+=1
    n = int(input())
    if n == 0:
        break
    lista = []
    for i in range(n):
        pes, agua = map(int, input().split())
        lista.append(pes)
        lista.append(agua)
    print("Cidade# {}:" .format(city))
    media0 = 0
    media1 = 0
    for i in range(n*2):
        if i%2 == 0:
            media0 += lista[i]
            media1 += lista[i+1]
            c = round(lista[i]/lista[i+1])

            print("{}-{}" .format(lista[i],c), end="")
            if i+2 != n*2:
                print(" ", end="") 
    print()
