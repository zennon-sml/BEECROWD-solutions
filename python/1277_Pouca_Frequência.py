n = int(input())
for i in range(n):
    n1 = int(input())
    nome = input().split()
    freq = input().split()
    alunos = []
    for i in range(len(freq)):
        p = 0
        x = freq[i].replace('M', '')
        for j in x:
            if j == "P":
                p += 1
        # 100 = len(a)
        # x   =   p
        perc = p*100/len(x)
        if perc < 75:
            alunos.append(nome[i])
    ate = len(alunos)
    for i in range(ate):
        print(alunos[i], end="")
        if i < ate-1:
            print(" ", end="")
        else:
            print()
        
