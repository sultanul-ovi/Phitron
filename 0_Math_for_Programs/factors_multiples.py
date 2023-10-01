def find_factors(num):
    factors = [i for i in range(1, num + 1) if num % i == 0]
    return factors

def find_multiples(num):
    multiples = [num * i for i in range(1, 6)]
    return multiples

def main():
    num = int(input("Enter a number: "))
    factors = find_factors(num)
    multiples = find_multiples(num)
    
    print(f'Factors of {num}: {factors}')
    print(f'First 5 Multiples of {num}: {multiples}')

if __name__ == '__main__':
    main()
