# Python Implementation
# Array Deletion
# Deleting An Element from a specific location

from array import *

array1 = array('i', [1,2,3,4,5])

print("Original array elements:")
for x in array1:
    print(x)


array1.remove(4)


print("Array elements after delete:")
for x in array1:
    print(x)