dia_i = int(input().split()[1])

hora = input().split(":")
hora_i = int(hora[0])
minuto_i = int(hora[1])
segundo_i = int(hora[2])

dia_f = int(input().split()[1])

hora = input().split(":")
hora_f = int(hora[0])
minuto_f = int(hora[1])
segundo_f = int(hora[2])

dias = dia_f - dia_i
horas = hora_f - hora_i
minutos = minuto_f - minuto_i
segundos = segundo_f - segundo_i 

if segundos < 0:
    minutos -= 1
    segundos += 60
if minutos < 0:
    horas -= 1
    minutos += 60
if horas < 0:
    dias -= 1 
    horas += 24
    
print(dias, "dia(s)")
print(horas, "hora(s)")
print(minutos, "minuto(s)")
print(segundos, "segundo(s)")