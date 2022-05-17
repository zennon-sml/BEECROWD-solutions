import time
from datetime import timedelta, datetime
# seconds = time.ctime()
# print(seconds)
# print("")
# time.sleep(2)
# print(2)
# t = (2002,5,11,4,4,4,1,1,0)
# local_time = time.mktime(t)
# print("Local time:", local_time)

while True:
    h1, m1, h2, m2 = map(int, input().split())
    if (h1+h2+m1+m2) == 0:
        break
    if h1 > h2:
        day = "12"
    elif h1 == h2:
        if m1 > m2:
            day = "12"
        elif m1 == m2:
            day = "12"
    else:
        day = "11"
    tempo0 = "2002,May,11," + str(h1) +","+ str(m1)
    tempo1 = "2002,May,"+ day +","+ str(h2) +","+ str(m2)
    result0 = time.strptime(tempo0, "%Y,%B,%d,%H,%M")
    result1 = time.strptime(tempo1, "%Y,%B,%d,%H,%M")
    result2 = datetime.fromtimestamp(time.mktime(result0))
    result3 = datetime.fromtimestamp(time.mktime(result1))
    # print(result0)
    # print(result1)
    # print(70*"-")
    diff = result3 - result2
    print(round(diff / timedelta(minutes=1)))
