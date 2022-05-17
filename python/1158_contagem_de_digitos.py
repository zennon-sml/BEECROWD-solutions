def contar(a, b):
    nums = [0,0,0,0,0,0,0,0,0,0]
    for i in range(a,b+1):
        while i != 0:
            resto = i % 10
            nums[resto] += 1
            i = i // 10
    return nums

while(True):
    a, b = map(int, input().split())
    if a == 0 and b == 0:
        break
    nums = contar(a, b)
    print(' '.join(map(str, nums)))
    