def soma(a):
    sum = 0
    for i in a:
        sum += int(i)
    return sum

l1 = input().split()
l2 = input().split()
l3 = input().split()
l4 = input().split()
s1 = soma(l1)
s2 = soma(l2)
s3 = soma(l3)
s4 = soma(l4)
maxi = max(s1,s2,s3,s4)
maxiB = str(bin(maxi))
if len(maxiB) < 9:
    maxiB = '0'*abs(len(maxiB)-10) + maxiB[2:]
print(maxi, "=", maxiB)