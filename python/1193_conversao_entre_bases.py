n = int(input())
for i in range(1,n+1):
    num, type = map(str, input().split())
    print("Case {}:" .format(i))
    if type == bin:
        print("{} dec" .format(int("0b" + num)))
        print("{} hex" .format(hex(int(num))))
    elif type == "dec":
        num = int(num)
        print("{} hex" .format(hex(num)))
        print("{} bin" .format(bin(num)))
    else:
        num = int(num)
        print("{} dec" .format(int(num)))
        print("{} bin" .format(bin(num)))
        