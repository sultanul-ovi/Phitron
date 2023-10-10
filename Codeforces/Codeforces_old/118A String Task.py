a = input()

a = a.lower()
a = a.replace('a', '')
a = a.replace('e', '')  
a = a.replace('i', '') 
a = a.replace('o', '') 
a = a.replace('u', '') 
a = a.replace('y', '') 



a = list(a)
for i in range(0,len(a)):
    a[i] = '.' + a[i]

a = "".join(a)
print(a)

