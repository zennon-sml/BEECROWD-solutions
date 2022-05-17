#Zennon sampaio
#Antonia Priscilla 
par = [] #cria uma lista vazia para armazenar os numeros pares
impar = [] #cria uma lista vazia para armazenar os numeros impares
n = int(input()) #recebe um numero inteiro da entrada padrão
for i in range(n): #realiza um loop de "0" ate o valor "n"
    num = int(input()) #recebe um numero inteiro da entrada padrão 
    if num % 2 == 0: #verifica se o numero é par
        par.append(num) #adiciona o numero a lista "par"
    else: #se não
        impar.append(num) #adiciona o numero a lista "impar"
for i in sorted(par): #realiza um loop de "i" percorrendo lista "par" organizada crescentemente
    print(i) #mostra na entrada padrão o valor da lista de pares
impar = sorted(impar) #organiza a lista "impar" de forma crescente
for i in range(1, len(impar)+1): #faz um for de 1 a o tamanho da lista "impar" mais 1
    print(impar[-i]) #mostra na saída padrão o valor da lista "impar" percorrendo-a de forma decrescente