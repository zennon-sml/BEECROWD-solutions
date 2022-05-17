def fatorial(n):
    sum = 1
    for i in range(1,n+1):
        sum = sum*i
    return sum

while True:
    try:
        n1, n2 = map(int, input().split())
        print(fatorial(n1) + fatorial(n2))
    except EOFError:
        break