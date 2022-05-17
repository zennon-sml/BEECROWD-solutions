n = int(input())
pals = []
for i in range(n):
    pal = input().split()
    pals.append(pal)

print(pals)
for i in range(len(pals)):
    pals[i] = sorted(pals[i], key = len)
for i in pals:
    for j in range(len(i) - 1):
        print(i[j] + " ", end = "")
    print(i[-1])

