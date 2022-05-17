salario = float(input())
if salario <= 400 and salario >= 0:
    aumento = (salario * 0.15)
    porc = ("15 %")
if salario <= 800 and salario >= 400.01:
    aumento = (salario * 0.12)
    porc = ("12 %")
if salario <= 1200 and salario >= 800.01:
    aumento = (salario * 0.10)
    porc = ("10 %")
if salario <= 2000 and salario >= 1200.01:
    aumento = (salario * 0.07)
    porc = ("7 %")
if salario > 2000:
    aumento = (salario * 0.04)
    porc = ("4 %")        
print("Novo salario: {:.2f}" .format(salario + aumento))
print("Reajuste ganho: {:.2f}" .format(aumento))
print("Em percentual:", porc)
   