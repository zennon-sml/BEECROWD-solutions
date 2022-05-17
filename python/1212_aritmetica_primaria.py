while True:
    a, b = map(str, input().split())
    if a == "0" and b == "0":
        break
    tam = min(len(a), len(b))
    if len(a) == tam:
        maior = "1000000000"+b
        menor = "1000000000"+a
    else:
        maior = "1000000000"+a
        menor = "1000000000"+b
    maior = list(maior)
    menor = list(menor)
    carry = 0
    i = 1
    sim = False
    while tam > 0:
        if sim:
            maior[-i] = str(int(maior[-i]) + 1)
        if int(maior[-i]) + int(menor[-i]) > 9:
            carry += 1
            sim = True
            i += 1
            tam += 1
        else:
            sim = False
            i += 1
        tam -= 1
    if sim:
        maior[-i] = str(int(maior[-i]) + 1)
        if maior[-(i)] == "10":
            carry += 1
    if carry == 1:
        print(carry, end="")
        print(" carry operation.")
    elif carry:
        print(carry, end="")
        print(" carry operations.")
    else:
        print("No carry operation.")