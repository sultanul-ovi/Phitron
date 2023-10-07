def foo(temperature):
    if temperature > 25:
        return "Hot"
    elif 25 >= temperature >= 15:
        return "Warm"
    else:
        return "Cold"
    
    
# temp = float(input("Enter temperature: "))
# print(temp)
# print(foo(temp))

name = input("Enter your name: ")
sur_name = input("Enter your surname: ")
#message = "Hello %s !" % name
message = f"Hello {name} {sur_name}"
print(message)