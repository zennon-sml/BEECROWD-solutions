while 1:
    try:
        a = input()
        if len(a) > 9:
            print("palavrao")
        else:
            print("palavrinha")
    except EOFError:
        break
