a, b, c, d = map(int, input().split())
if a > max(b, c) - min(b , c) and a < b + c:
    print("hi")