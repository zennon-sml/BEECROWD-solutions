x = 12
y = 18
x1 = x
y1 = y
i = 2
while int(max(x1/y1)) > 0 and int(y1/i) > 0:
    if x1 % i == 0 and y1 % i == 0:
        x1 = x1/i
        y1 = y1/i
        if x1 % i != 0:
            i = 2
    elif i+1 == x1 or i+1 == y1:
        x1 = x1/x1
        y1 = y1/y1
        break
    else:
        i+=1
print("{}/{} = {}/{}" .format(int(x),int(y),int(x1),int(y1)))