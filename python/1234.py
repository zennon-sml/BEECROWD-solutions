while True:
    try:
        sentence = input()
        sentence = sentence.capitalize()
        sentencemod = ""
        sentencemod += sentence[0]
        if sentence[0] == sentence[0].lower():
            start = False
        else:
            start = True
        for i in range(1,len(sentence)):
            if start == True and sentence[i] != " ":
                sentencemod += sentence[i].lower()
                start = False
            elif start == False and sentence[i] != " ":
                sentencemod += sentence[i].upper()
                start = True
            else:
                sentencemod += " "
        print(sentencemod)
    except EOFError:
        break