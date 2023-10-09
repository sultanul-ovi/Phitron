def mean(value):
    the_mean = sum(value) / len(value)
    return the_mean

print(mean( [1, 4, 5] ))


temp = [9.1,2.4,8.3,5.5,3.3]
print(mean(temp))

a = 10
b = 20
c = 10

if a > b:
    print("a is less than b")
elif a == c:
    print("a and c are equal")
else:
    print("c is less than b")


def area(a, b):
    return a*b

print(area(4, 5))

print(area(b=4, a=7))

def area2(a, b=6):
    return a*b

print(area2(4))
print(area2(4,7))


def mean(*args):
    return sum(args)/len(args)


print(mean(1, 3, 5, 4))

def mean(**kwargs):
    return kwargs



print(mean(a=1, b=3, c=5, d=4))