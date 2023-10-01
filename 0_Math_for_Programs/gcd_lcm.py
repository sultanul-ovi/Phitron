def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return a * b // gcd(a, b)

def main():
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number: "))
    
    print(f'GCD of {num1} and {num2} is: {gcd(num1, num2)}')
    print(f'LCM of {num1} and {num2} is: {lcm(num1, num2)}')

if __name__ == '__main__':
    main()
