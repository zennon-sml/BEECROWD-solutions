while(True):
    n = int(input())
    if(not n):
        break
    vagao1 = list(range(1, n+1))
    b = []
    for i in vagao1:
        b.append(str(i))
    for i in range(n):
        vagao = input().split()
        if vagao[0] == "0":
            break
        if vagao[0] == '1':
            if vagao[::-1] == b[::-1]:
                print("Yes")
            else:
                print("No")
        elif vagao[::-1] == b:
            print("Yes")
        else:
            print("No")
        

    
