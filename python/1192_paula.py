n = int(input())
for i in range(n):
    p = input()
    if p[0] == p[2]:
        print(int(p[0]) * int(p[2]))
    elif p[1].islower():
        print(int(p[0]) + int(p[2]))
    else:
        print(int(p[2]) - int(p[0]))