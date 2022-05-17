z = 1
while(True):
    mar, con = map(int, input().split())
    if mar == 0 and con == 0:
        break
    marmo = []
    consu = []
    for i in range(mar):
        marmo.append(int(input()))
    for i in range(con):
        consu.append(int(input()))
    print("CASE# {}:" .format(z))
    z += 1
    marmo = sorted(marmo)
    consu = sorted(consu)
    for i in consu:
        if i in marmo:
            print("{} found at {}" .format(i, sorted(marmo).index(i)+1))
        else:
            print(str(i) + " not found")
