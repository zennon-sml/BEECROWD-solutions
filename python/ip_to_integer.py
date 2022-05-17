x = input()
n = x.split(".")

totalbin = []
totalint = 0
print("ip: ",n)
size  = len(n)
for i in range (0, size):
    print("valor em int: ",i,":",n[i])
    print("valor em bin: ",bin(int(n[i])))
    totalbin.append(str(bin(int(n[i]))))
print("bin total: ",totalbin )

print("")
print("formula de converter ip pra interio")
print("ip Address = n[0].n[1].n[2].n[3]")
print("IP Number = 256**3 * n[0] + 256**2 * n[1] + 256**1 * n[2] + 256**0 * n[3]")
print(n)
ip_to_int = 0
count=3
for i in range(0, 4):
    ip_to_int += 256**(count) * int(n[i])
    print(256*(count) * int(n[i]), " + ",end="")
    count-=1
print("")
print("ip to int: ", ip_to_int)