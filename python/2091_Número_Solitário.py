while True:
    n = int(input())
    if n == 0:
        break
    z = input().split(" ")
    z = sorted(z)
    size = len(z)
    if z[-1] != z[-2] and z[-2] == z[-3]:
        print(z[-1])
    elif z[-2] == z[-1] and z[-3] == z[-2]:
        print(z[-1])
    else:
        j = 0
        for i in range(size-1):
            if z[j] != z[j+1]:
                print(z[j])
                break
            j += 2
