while(True):
    try:
        n = input()
        a = 0
        for i in n:
            if i == "(":
                a += 1
            elif i == ")":
                a -= 1
                if a < 0:
                    break
        if a != 0:
            print("incorrect")
        else:
            print("correct")
    except EOFError:
        break

