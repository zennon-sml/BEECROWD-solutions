n = int(input())
alfb = []
for i in range(26):
        alfb.append(0)  
for i in range(n):
    txt = input().lower()
    for j in range(len(txt)):
        for j1 in range(26):
            if  txt[j] == chr(j1+97) and txt[j].isalpha():
                alfb[j1] += 1
    max0 = max(alfb)
    alfb0 = []
    for i in range(26):
        if max0 != alfb[i]:
            alfb[i] = 0
        if alfb[i] > 0:
            alfb0.append(chr(97+i))
        alfb[i] = 0
  
    saida = ""
    saida = ''.join(alfb0)

    print(saida)