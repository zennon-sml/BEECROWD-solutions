from datetime import datetime, date, time
data = input()
data = data.split("/")
data = "20" + data[2] + data[1] + data[0]

#data.strftime()
data = datetime.strptime(data, '%Y%m%d')
#natal = datetime.strptime(natal, '%Y%m%d')
print(data)
print(data)