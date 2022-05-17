#Zennon sampaio
#Antonia Priscilla 
amigosyes = [] #cria uma lista vazia para armazenar os amigos que disseram "YES"
amigosno = [] #cria uma lista vazia para armazenar os amigos que disseram "NO"
while(True): #cria um loop infinito
    try: #será executado se não houver nenhum erro na entrada
        amigo, opcao = map(str, input().split()) #pega as variaveis amigo e opcao da entrada
        if opcao == "NO": #compara se a variavel opcao é igual a "NO"
            amigosno.append(amigo) #adiciona a variavel "amigo" na lista de amigos que disseram "NO"
        else: #se a variavel for diferente de "NO" ou seja "YES"
            if amigo not in amigosyes: #verifica se a variavel "amigo" não estiver contida na lista na lista amigoyes
                amigosyes.append(amigo) #adiciona "amigo" na lista de amigos que escolheram a opção "YES"
    except ValueError: #será executado se houver nenhum erro na entrada
        maior = 0 #inicia uma variavel com o valor "0"
        for i in sorted(amigosyes): #percorre a lista "amigosyes" organizada alfabeticamente
            print(i) #mostra na saída padrão cada valor da lista percorrida por "i"
            if len(i) > maior: #verifica se o tamanho da string "i" é maior que a variavel "maior"
                maior = len(i) #torna a varialvel "maior" igual a tamanho da string "i"
        for i in sorted(amigosno):#percorre a lista "amigosno" organizada alfabeticamente
            print(i) #mostra na saída padrão cada valor da lista percorrida por "i"
        print() #quebra uma linha(necessario para a saida ser igual a saida desejada)
        for i in amigosyes: #percorre a lista "amigosyes" na ordem cronologica a que foi feita
            if len(i) == maior: #verifica se o tamanho da string "i" é igual a variavel "maior"
                print("Amigo do Habay:") #saída necessaria
                print(i) #mostra o amigo de habay escolhido
                break #quebra o loop "for"
        break #quebra o loop "while" principal