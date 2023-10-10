# Python Implementation
# Array Insertion
# Inserting An Element at a specific location

from array import *

array1 = array('i', [1,2,3,4,5])

print("Original array elements: ")
for x in array1:
    print(x)

# Inserting value 6 in array position 1
array1.insert(1,6)

print("Array elements after insertion: ")
for x in array1:
    print(x)