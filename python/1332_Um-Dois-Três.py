n = int(input())
for i in range(n):
    pal = input()
    one = 0
    two = 0
    onee = "one"
    twoo = "two"
    if len(pal) == 5:
        print(3)
        continue
    for j in range(len(pal)):
        if (onee[] == pal[j]) or ("n" == j) or ("e" == j):
            one += 1
        if ("t" == j) or ("w" == j) or ("o" == j):
            two += 1

    if one >= 2:
        print(1)
    elif two >= 2:
        print(2)