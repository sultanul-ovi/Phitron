# spam = 'Hello World!'
# print(spam)
# print(spam.upper())
# print(spam.lower())
# print('\n')
# spam = 'hello world!'
# print(spam.isupper())
# print(spam.islower())
# print('\n')
# spam = ''
# print(spam.isupper())
# print(spam.islower())
# print('\n')

# # isalpha, isalnum, isdecimal, isspace, istitle

# spam = 'hello world!'
# print(spam.startswith('hello'))
# print(spam.startswith('h'))
# print(spam.startswith('ello'))
# print('\n')

# spam = 'hello world!'
# print(spam.endswith('world'))
# print('\n')

# # Join
# print(','.join(['cats','bats','dogs']))
# print(''.join(['cats','bats','dogs']))
# print(' '.join(['cats','bats','dogs']))
# print('\n'.join(['cats','bats','dogs']))

# #split
# print('My name is Ovi'.split())
# print('My name is Ovi'.split('m'))

# #rjust + ljust + center
# print('Hello'.ljust(10))
# print('Hello'.rjust(10))
# print('Hello'.rjust(10,'*'))
# print('Hello'.ljust(10,'='))
# print('Hello'.center(20,'-'))

# #strip
# print('    Hello     '.strip())
# print('    Hello     '.lstrip())
# print('    Hello     '.rstrip())

# print('Hello there'.replace('e', 'XYZ'))


name = 'Alice'
place = 'Main Street'
time = '6 PM'
food = 'Burgers'

print('Hello %s, you are invited to a party %s at %s. please bring %s.' % (name, place,time,food))
