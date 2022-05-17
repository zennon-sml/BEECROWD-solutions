par = []
impar = []
n = int(input())
while(n > 0):
    n -= 1
    num = int(input())
    if num % 2 == 0:
        par.append(num)
    else:
        impar.append(num)
for i in sorted(par):
    print(i)
impar = sorted(impar)
for i in range(1, len(impar)+1):
    print(impar[-i])