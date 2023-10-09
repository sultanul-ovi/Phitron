
count = input()

output_list = []

i = 0
while int(i) < int(count):
    a = input()

    if(len(a) <= 10):
        output_list.append(a)
    else:
        output_list.append(a[0] + str(len(a)-2) + a[len(a)-1])
    
    i = i +1
    

i = 0
while int(i) < int(count):
    print(output_list[i])
    
    i = i+1