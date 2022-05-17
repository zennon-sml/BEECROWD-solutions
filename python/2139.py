from datetime import date, timedelta, datetime


while True:
    try:
        mes,dia = input().split()
        if len(mes) == 1:
            mes = '0' + mes
        if len(dia) == 1:
            dia = '0' + dia
        mesdia = '2016' + mes + dia
        natal = "20161225"

        mesdia = datetime.strptime(mesdia, '%Y%m%d')
        natal = datetime.strptime(natal, '%Y%m%d')
        dias = (natal - mesdia).days
        #print(dias)
        if dias == 0:
            print("E natal!")
        elif dias == 1:
            print("E vespera de natal!")
        elif dias < 0:
            print("Ja passou!")
        else:
            print("Faltam", dias,"dias para o natal!")
    except EOFError:
        break