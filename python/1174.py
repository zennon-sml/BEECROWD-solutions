vet = []
for i in range(100):
    z = float(input())
    if(z <= 10):
        vet.append(z)
for i in range(len(vet)):
    print("A[{}] = {:.1f}" .format(i, vet[i]))
