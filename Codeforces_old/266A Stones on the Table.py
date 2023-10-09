

a = input()
s = input()
s = list(s)
count = int(0)
for i in range(1,len(s)):
    if(s[i-1] == s[i]):
        count = count + 1


print(count)

