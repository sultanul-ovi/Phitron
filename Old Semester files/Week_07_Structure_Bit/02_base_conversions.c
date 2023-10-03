#include <stdio.h>
#include <stdbool.h>
#include <string.h>

unsigned int ToInt(char str[])
{
    int len = strlen(str);
    unsigned int ans = 0;
    for (int i = 0; i < len; i++)
        ans = ans * 2 + str[i] - '0';
    return ans;
}
void ToBinary(unsigned int val, char str[])
{
    int idx = 0;
    while (val)
    {
        int rem = val % 2;
        val = val / 2;
        str[idx] = '0' + rem;
        idx++;
    }
    str[idx] = '\0';
    strrev(str);
}

int main()
{
    char str[1001];
    gets(str);
    unsigned int bin = ToInt(str);
    printf("%u\n", bin);

    unsigned int v = bin;
    ToBinary(v, str);
    puts(str);
    return 0;
}
