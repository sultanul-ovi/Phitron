# this program says hello and asks for my name

print('Hello World!')
print('What is your name') # asks for their name
myName = input()
print('It is good to meet you, ' + myName)
print('The length of your name is: ' + str(len(myName)))

print('What is your age?') # asks for their age
myAge = input()
print('You will be ' + str(int(myAge) + 1) + ' in a year.')
