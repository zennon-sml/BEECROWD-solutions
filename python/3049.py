base = int(input())
topo = int(input())

x = 0
area = 160*70
areat = (max(base, topo) - min(base, topo)) * 70 / 2
arean = topo * 70
if topo < base:
    arean = topo * 70
else:
    arean = 160 - topo * 70
if area - areat + arean > areat + arean:
    x = 1
elif area - areat + arean > areat + arean

print(x)
