vet = []
x = int(input())
vet.append(x)
for i in range (10):
    val = x*2
    x = val
    vet.append(val)
    print("N[{}] = {}" .format(i,vet[i]))   
