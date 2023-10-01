def set_operations(set1, set2):
    print(f"Set 1: {set1}")
    print(f"Set 2: {set2}")

    # Union
    union_set = set1.union(set2)
    print(f"Union of Set 1 and Set 2: {union_set}")

    # Intersection
    intersection_set = set1.intersection(set2)
    print(f"Intersection of Set 1 and Set 2: {intersection_set}")

    # Difference
    difference_set1 = set1.difference(set2)
    print(f"Difference of Set 1 from Set 2: {difference_set1}")

    difference_set2 = set2.difference(set1)
    print(f"Difference of Set 2 from Set 1: {difference_set2}")

    # Symmetric Difference
    symmetric_difference_set = set1.symmetric_difference(set2)
    print(f"Symmetric Difference of Set 1 and Set 2: {symmetric_difference_set}")

def get_set_input():
    set_str = input("Enter the elements of the set separated by spaces: ")
    return set([int(i) for i in set_str.split() if i.isdigit()])

# Get user input for two sets
set1 = get_set_input()
set2 = get_set_input()

# Perform set operations
set_operations(set1, set2)


# 1 2 3 4 5
# 4 5 6 7 8