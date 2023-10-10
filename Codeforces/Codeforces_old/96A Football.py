s = input()

if(len(s) > 6):
    for i in range(0, len(s)-6):
        if(s[i] == s [i+1] == s[i+2] == s[i+3] == s [i+4] == s[i+5] == s[i+6]):
            print("YES")
            exit()
    

print("NO")