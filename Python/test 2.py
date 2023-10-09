def divide_array(nums, pivot):
    """
    Divide the array based on the pivot.
    
    Args:
    - nums (list): list of numbers
    - pivot (int): number to compare with

    Returns:
    tuple: left and right arrays after division
    """
    left, right, eq_toggle = [], [], True  # eq_toggle helps in alternating the equal numbers

    for num in nums:
        if num < pivot:
            left.append(num)
        elif num > pivot:
            right.append(num)
        else:
            if eq_toggle:
                left.append(num)
            else:
                right.append(num)
            eq_toggle = not eq_toggle

    return left, right

# Example
nums = [3, 5, 7, 5, 8, 4, 2, 5, 6, 10, 1, 9, 5, 3, 7, 8, 4, 2, 6, 9]
pivot = 5
left, right = divide_array(nums, pivot)
print("Left:", left)
print("Right:", right)
