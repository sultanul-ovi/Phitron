def find_divisors(num):
    divisors = []
    for i in range(1, int(num**0.5) + 1):
        if num % i == 0:
            divisors.append(i)  # i is a divisor
            if i != num // i:  # if divisors are not the square root of num
                divisors.append(num // i)  # num // i is also a divisor
    return sorted(divisors)  # Sort the divisors in ascending order

def count_divisors(num):
    count = 0
    for i in range(1, int(num**0.5) + 1):
        if num % i == 0:
            count += 1  # i is a divisor
            if i != num // i:  # if divisors are not the square root of num
                count += 1  # num // i is also a divisor
    return count

def main():
    num = int(input("Enter a number: "))
    
    divisors = find_divisors(num)
    total_divisors = count_divisors(num)
    
    print(f'The divisors of {num} are: {divisors}')
    print(f'The total number of divisors of {num} is: {total_divisors}')

if __name__ == '__main__':
    main()
