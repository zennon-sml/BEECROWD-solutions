while True:
    h1, m1, h2, m2 = map(int, input().split())
    if h1+m1+h2+m2 == 0:
        break
    dormir = h1*60 + m1
    acordar = h2*60 + m2
    if acordar == dormir:
        print("1440")
    elif acordar < dormir:
        print((acordar+1440) - dormir)
    else:
        print(acordar - dormir)