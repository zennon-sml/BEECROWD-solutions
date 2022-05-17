alf0 = "abcdefghijklmnopqrstuvwxyz"
alf1 = input()
palav = input()
decifrado = ""
    
for i in range(len(palav)):
    for j in range(26):
        if palav[i] == alf1[j]:
            decifrado += alf0[j]
        
print(decifrado)