amigosyes = []
amigosno = []
while(True):
    try:
        amigo, opcao = map(str, input().split())
        if opcao == "NO":
            amigosno.append(amigo)
        else:
            if amigo not in amigosyes:
                amigosyes.append(amigo)
    except ValueError:
        maior = 0
        for i in sorted(amigosyes):
            print(i)
            if len(i) > maior:
                maior = len(i)
        for i in sorted(amigosno):
            print(i)
        print()
        for i in amigosyes:
            if len(i) == maior:
                print("Amigo do Habay:")
                print(i)
                break
        break