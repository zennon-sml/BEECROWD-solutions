while True:
    try:
        palavra = ''
        temp = ''
        endhome = False
        txt = input()
        for i in txt:
            if i == '[':
                if endhome:
                    palavra = temp + palavra
                    temp = ''
                endhome = True
                continue
            elif i == ']':
                if endhome:
                    palavra = temp + palavra
                    temp = ''
                endhome = False 
                continue
            if endhome:
                temp += i
            else:
                palavra += i
        if temp:
            palavra = temp + palavra
        if palavra:
            print(palavra)
    except EOFError:
        break