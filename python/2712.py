n = int(input())
for i in range(n):
    strr = str(input())
    placa = strr.split("-")
    if (len(placa) == 2) and (len(placa[0]) == 3) and (len(placa[1]) == 4) and (placa[0] == placa[0].upper()):
        try:
            checkar = int(placa[0])
            lastd = int(placa[1][3])
            if lastd > 0 and lastd < 3:
                print("MONDAY")
            elif lastd > 2 and lastd < 5:
                print("TUESDAY")
            elif lastd > 4 and lastd < 7:
                print("WEDNESDAY")
            elif lastd > 6 and lastd < 9:
                print("THURSDAY")
            elif lastd > 8 or lastd == 0:
                print("FRIDAY")
        except:
            print("FAILURE")
    else:
        print("FAILURE")
