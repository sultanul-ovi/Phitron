# Python Implementation
# Array Update
# Updating an Element at a Specific Location

from array import *


array1 = array('i', [1,2,3,4,5])

print("Original array elements are:")
for x in array1:
    print(x)


array1[1] = 8

print("Array elements after update:")
for x in array1:
    print(x)