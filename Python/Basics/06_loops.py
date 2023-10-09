temp = [9.1,2.4,8.3,5.5,3.3]


for item in temp:
    print(round(item))
print("\n")
for letter in 'hello':
    print(letter.title())


print("\n")

def celsius_to_kelvin(cels):
    return cels + 273.15

monday_temperatures = [9.1, 8.8, -270.15]

for temperature in monday_temperatures:
    print(celsius_to_kelvin(temperature))
print("\n")

phone_numbers = {"John Smith": "+37682929928", "Marry Simpons": "+423998200919"}

for key, value in phone_numbers.items():
    print("{} has as phone number {}".format(key, value))





#while loop

uname = ''


while True:
    uname = input("Enter Username: ")
    if uname == 'ovi':
        break
    else:
        continue

colors = [11, 34, 98, 43, 45, 54, 54]
for color in colors:
    print(color)


colors = [11, 34.1, 98.2, 43, 45.1, 54, 54]

for color in colors:
    if isinstance(color, int) and color > 50:
        print(color)

phone_numbers = {"John Smith": "+37682929928", "Marry Simpons": "+423998200919"}

for key, value in phone_numbers.items():
    print("%s: %s" % (key, value))
    
    
phone_numbers = {"John Smith": "+37682929928", "Marry Simpons": "+423998200919"}

for value in phone_numbers.values():
    print(value.replace("+", "00"))
    



for i in range (0,10,2):
    print(i)