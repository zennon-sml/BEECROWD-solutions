def euclides(x, y):
	r = x%y
	if(r == 0):
		return y
	else:
		return euclides(y, r)

n = int(input())
for i in range(n):
    z = input().split()
    N1 = int(z[0])
    D1 = int(z[2])
    N2 = int(z[4])
    D2 = int(z[6])
    if z[3] == "+":
        x = N1*D2 + N2*D1
        y = D1*D2
        mdc = int(euclides(max(x,y), min(x,y)));
        x1 = x/mdc
        y1 = y/mdc
        if y1 < 0:
            y1 = abs(y1)
            x1 = x1*-1
        print("{}/{} = {}/{}" .format(int(x),int(y),int(x1),int(y1)))
    elif z[3] == "-":
        x = N1*D2 - N2*D1
        y = D1*D2
        mdc = int(euclides(max(x,y), min(x,y)));
        x1 = x/mdc
        y1 = y/mdc
        if y1 < 0:
            y1 = abs(y1)
            x1 = x1*-1
        print("{}/{} = {}/{}" .format(int(x),int(y),int(x1),int(y1)))
    elif z[3] == "*":
        x = (N1*N2)
        y = (D1*D2)
        mdc = int(euclides(max(x,y), min(x,y)));
        x1 = x/mdc
        y1 = y/mdc
        if y1 < 0:
            y1 = abs(y1)
            x1 = x1*-1
        print("{}/{} = {}/{}" .format(int(x),int(y),int(x1),int(y1)))
    else:
        x = (N1*D2)
        y = (N2*D1)
        mdc = int(euclides(max(x,y), min(x,y)));
        x1 = x/mdc
        y1 = y/mdc
        if y1 < 0:
            y1 = abs(y1)
            x1 = x1*-1
        print("{}/{} = {}/{}" .format(int(x),int(y),int(x1),int(y1)))