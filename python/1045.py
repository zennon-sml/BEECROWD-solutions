a, b, c = list(map(float,input(). split()))
lista = [a, b, c]
lista.sort(reverse=True)
a = lista[0]
b = lista[1]
c = lista[2]
if a >= b+c:
    print("NAO FORMA TRIANGULO")
elif a**2 == b**2 + c**2:
    print("TRIANGULO RETANGULO")
elif a**2 > b**2 + c**2:
    print("TRIANGULO OBTUSANGULO")
elif a**2 < b**2 + c**2:
    print("TRIANGULO ACUTANGULO")
if a == b and b == c and c == a:
    print("TRIANGULO EQUILATERO")
elif b == a:
    print("TRIANGULO ISOSCELES")
elif c == a:
    print("TRIANGULO ISOSCELES")
elif c == b:
    print("TRIANGULO ISOSCELES")