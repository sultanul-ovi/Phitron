s = input()

s = list(s)
for i in range (0, len(s),2):
    for j in range(0, len(s),2):
        if(s[i] < s[j]):
            s[i], s[j] = s[j], s[i]

s = "".join(s)
print(s)