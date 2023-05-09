while True:
    a = int(input())
    if a == 0:
        break
    moves = 0
    p = 1
    for i in range(a):
        pos0 = input().split()
        pos = [int(num) for num in pos0]
        if p == 1:
            if (pos[1] == 1):
                if(pos[0] == 0):
                    p = 0
                    moves+= 1
                elif(pos[2] == 0):
                    p = 2
                    moves+= 1
        elif(p == 0):
            if(pos[0] == 1):
                if(pos[1] == 0):
                    p = 1
                    moves+=1
                else:
                    p = 2
                    moves += 2
        else:
            if(pos[2] == 1):
                if(pos[1] == 0):
                    p = 1
                    moves+=1
                else:
                    p = 0
                    moves += 2
    print(moves)
