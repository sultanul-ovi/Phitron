# Python Implementations
# HashTable 

hashTable = [[],] * 10

def checkPrime(n):
    if n == 1 or n == 0:
        return 0
    for i in range(2, n//2):
        if n % i == 0:
            return 0
    return 1


def getPrime(n):
    if n % 2 == 0:
        n = n + 1
    while not checkPrime(n):
        n += 2
    return n


def hashFunction(key):
    capacity = getPrime(10)
    return key % capacity


def insertData(key, data):
    index = hashFunction(key)
    hashTable[index] = [key, data]


def removeData(key):
    index = hashFunction(key)
    hashTable[index] = 0

print("\nInitial Table: \n ")
print(hashTable)

insertData(13, "ovi")
insertData(37, "oishee")
insertData(23, "lami")
insertData(64, "himel")

print("\nInserting few data: \n ")
print(hashTable)

removeData(13)
removeData(42)

print("\nRemoving few data: \n ")
print(hashTable)