def traco():
    for i in range(38):
        print("-", end="")
    print("-")


def cabeca():
    print("| decimal   |  octal  |  Hexadecimal  |")


def pipes():
    decimal = [[0], [0], [0]]
    for i in range(1, 16):
        decimal[0].append(i)
        octal = oct(i)
        octal = octal[2:]
        decimal[1].append(octal)
        hexa = hex(i)
        hexa = hexa[2:]
        decimal[2].append(hexa.upper())
    # print(decimal)
    count = [0, 0, 0]
    z = [0, 0, 0]
    for j in range(16):
        i = 0
        while i < 35:
            if i == 0 or i == 11 or i == 20 or i == 34:
                print(end="|")
            if i == 6:
                print(decimal[0][count[0]], end="")
                i += len(str(decimal[2][count[0]]))
                z[0] = len(str(decimal[2][count[0]]))
                count[0] += 1
            elif i == 16:
                print(decimal[1][count[1]], end="")
                i += len(str(decimal[2][count[1]]))
                z[1] = len(str(decimal[2][count[1]]))
                count[1] += 1
            elif i == 29:
                print(decimal[2][count[2]], end="")
                i += len(str(decimal[2][count[2]]))
                z[2] = len(str(decimal[2][count[2]]))
                count[2] += 1
            if i == 5 and z[0] == 2:
                print("asd")
            else:
                print(end=" ")
                i += 1

        print()


traco()
cabeca()
traco()
# pipes()
print('|      0    |    0    |       0       |')
print('|      1    |    1    |       1       |')
print('|      2    |    2    |       2       |')
print('|      3    |    3    |       3       |')
print('|      4    |    4    |       4       |')
print('|      5    |    5    |       5       |')
print('|      6    |    6    |       6       |')
print('|      7    |    7    |       7       |')
print('|      8    |   10    |       8       |')
print('|      9    |   11    |       9       |')
print('|     10    |   12    |       A       |')
print('|     11    |   13    |       B       |')
print('|     12    |   14    |       C       |')
print('|     13    |   15    |       D       |')
print('|     14    |   16    |       E       |')
print('|     15    |   17    |       F       |')
traco()
