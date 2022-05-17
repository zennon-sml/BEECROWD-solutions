a = input()
b = input()
c = input()
if a == 'vertebrado':
    if b == 'ave':    
        if c == 'carnivoro':
            print("aguia")
        if c == 'onivoro':
            print("pomba")
    if b == 'mamifero':
        if c == 'onivoro':
            print("homem")
        if c == 'herbivoro':
            print("vaca")
if a == 'invertebrado':
    if b == 'inseto':    
        if c == 'hematofago':
            print("pulga")
        if c == 'herbivoro':
            print("lagarta")
    if b == 'anelideo':
        if c == 'hematofago':
            print("sanguessuga")
        if c == 'onivoro':
            print("minhoca")      
