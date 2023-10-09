spam = 42 #global variable

def hello(name):
    # if want to use global with same name
    # global spam
    # spam = 32
    
    spam = 32 # local variable
    print('Hello ' + name)
    return len(name)


n = hello('Jake')
print(str(n) + '\n', end='')
n = hello('Ovi')
print(str(n) + '\n', end='')
