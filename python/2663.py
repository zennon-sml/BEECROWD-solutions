n = int(input())
k = int(input())
peti = []
for i in range(n):
    com = int(input())
    peti.append(com)
peti.sort()
count = 0
i = 0
while i < k:
    if len(peti) > 2:
        t = peti[-1]
        t1 = peti[-2]
    if i == k-1 and t == t1:
        k = k+1
    count = count+1
    i = i+1
    if len(peti) != 0:
        peti.remove(max(peti))

print(count)