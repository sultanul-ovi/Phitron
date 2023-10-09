x = 10
y = "10"
z = 10.10


sum1 = x + x
sum2 = y + y

print("\n")

print(type(x))
print(type(y))
print(type(z))

print(sum1,sum2)

print("\n")


#list example
student_grades = [1.2,1.3,1.4]

print(student_grades)
print(type(student_grades))

list(range(1, 10))

list(range(1, 10, 2))

rainfall = [10, 5.5, "abc", [10,10]]


mysum = sum(student_grades)
mylen = len(student_grades)
mean = mysum/mylen

print(mean)

#dictionary example
student_grade = {"Ovi": 3.8, "Lami":3.7}
print(student_grade)
mysum2 = sum(student_grade.values())
mylen2 = len(student_grade.values())
mean2 = mysum2/mylen2
print(mean2)



#tuples example
my_tuples = (1,4,5)
#can not add or remove items.

