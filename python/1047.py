h1, m1, h2, m2 = list(map(int, input().split())) 
if h1 > h2:
    h = (24 - h1) + h2
    if m1 > m2:
        h = h - 1
        m = (60 - m1) + m2
    if m1 < m2:
        m = m2 - m1
    if m1 == m2:
        m = 0
if h1 < h2:
    h = h2 - h1
    if m1 > m2:
        h = h - 1
        m = (60 - m1) + m2
    if m1 < m2:
        m = m2 - m1
    if m1 == m2:
        m = 0
if h1 == h2:
    if m1 > m2:
        h = 23
        m = (60 - m1) + m2
    if m1 < m2:
        h = 0
        m = m2 - m1
    if m1 == m2:
        h = 24
        m = 0
print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(h, m))