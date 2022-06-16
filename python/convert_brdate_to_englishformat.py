dates = []
while True:
    try:
        date = input().split()
        mod = date[1].split('/')
        mod1 = "'" + mod[2][:4] +"-"+ mod[1] +"-"+ mod[0][1:3] + "',"
        date[1] = mod1
        dates.append(''.join(date))
    except EOFError:
        break
for i in dates:
    print(i)
