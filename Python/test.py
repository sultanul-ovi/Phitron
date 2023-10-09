def knapsack(capacity, weights, values, n):
    # Initialize a 2D table to store the maximum values
    table = [[0 for _ in range(capacity + 1)] for _ in range(n + 1)]

    # Fill in the table using bottom-up dynamic programming
    for i in range(1, n + 1):
        for j in range(1, capacity + 1):
            if weights[i - 1] <= j:
                table[i][j] = max(values[i - 1] + table[i - 1][j - weights[i - 1]], table[i - 1][j])
            else:
                table[i][j] = table[i - 1][j]

    # Determine the items included in the knapsack
    items = []
    i, j = n, capacity
    while i > 0 and j > 0:
        if table[i][j] != table[i - 1][j]:
            items.append(i - 1)
            j -= weights[i - 1]
        i -= 1

    # Return the maximum value and the items included
    return table[n][capacity], items


# Example usage
capacity = 10
weights = [2, 5, 7, 3, 1]
values = [10, 8, 12, 6, 3]
n = len(weights)

max_value, knapsack_items = knapsack(capacity, weights, values, n)

print("Maximum value:", max_value)
print("Items included in the knapsack:", knapsack_items)
