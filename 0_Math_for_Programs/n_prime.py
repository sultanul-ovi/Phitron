def is_prime(num):
    if num <= 1:
        return False
    if num == 2:
        return True
    if num % 2 == 0:
        return False
    for i in range(3, int(num**0.5) + 1, 2):
        if num % i == 0:
            return False
    return True

def find_n_primes(n):
    primes = []
    candidate = 2  # Starting with the first prime number
    while len(primes) < n:
        if is_prime(candidate):
            primes.append(candidate)
        candidate += 1
    return primes

def find_nth_prime(n):
    candidate = 2  # Starting with the first prime number
    count = 0
    while count < n:
        if is_prime(candidate):
            count += 1
        if count < n:  # Avoid incrementing the candidate on finding the nth prime
            candidate += 1
    return candidate

def main():
    n = int(input("Enter the value of n: "))
    primes = find_n_primes(n)
    nth_prime = find_nth_prime(n)
    
    print(f'The first {n} prime numbers are: {primes}')
    print(f'The {n}th prime number is: {nth_prime}')

if __name__ == '__main__':
    main()
