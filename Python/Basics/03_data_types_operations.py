# list operations

temp = [9.1,2.4,8.3]

temp.append(4.6)
print(temp)

temp.clear()
print(temp)

temp = [9.1,2.4,8.3,5.5,3.3]

t_index = temp.index(2.4)

print(t_index)


print(temp[1])

#first 2 item
print(temp[:2])
#last 2 item
print(temp[-2:])

#index 1 to 3 items
print(temp[1:4])


