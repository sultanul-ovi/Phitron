def prime_factorization(num):
    factors = []
    # Divide num by 2 until it's no longer divisible
    while num % 2 == 0:
        factors.append(2)
        num = num // 2

    # At this point num must be odd, so we can skip the even numbers
    for i in range(3, int(num**0.5) + 1, 2):
        while num % i == 0:
            factors.append(i)
            num = num // i

    # If num is a prime number greater than 2, then append it to the factors list
    if num > 2:
        factors.append(num)
    
    return factors

def unique_prime_factors(num):
    factors = prime_factorization(num)
    unique_factors = set(factors)
    return sorted(list(unique_factors))  # Sorted list of unique prime factors

def main():
    num = int(input("Enter a number: "))
    factors = prime_factorization(num)
    unique_factors = unique_prime_factors(num)
    print(f'The prime factorization of {num} is: {factors}')
    print(f'The unique prime factors of {num} are: {unique_factors}')

if __name__ == '__main__':
    main()
