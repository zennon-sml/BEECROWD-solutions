while True:
    a, b = input().split()
    if a == '0' and b == '0':
        break
    b = '0' + b
    c = int(b.replace(a, ''))
    print(c)