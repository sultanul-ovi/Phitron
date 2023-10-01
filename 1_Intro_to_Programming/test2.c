#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Binary
{
    char str[50];
};
unsigned int ToInt(char str[])
{
    int len = strlen(str);
    unsigned int ans = 0;
    for (int i = 0; i < len; i++)
        ans = ans * 2 + str[i] - '0';
    return ans;
}
struct Binary ToBinary(unsigned int val, int k)
{
    struct Binary ans;
    int idx = 0;
    while (val)
    {
        int rem = val % 2;
        val = val / 2;
        ans.str[idx] = '0' + rem;
        idx++;
    }
    while ((idx) != k)
    {
        ans.str[idx] = '0';
        idx++;
    }
    ans.str[idx] = '\0';
    strrev(ans.str);
    return ans;
}
bool getBit(unsigned int mask, int k)
{
    return (mask & (1 << k)) != 0;
}

unsigned int clearBit(unsigned int mask, int k)
{
    return mask & ~(1 << k);
}

int main()
{
    char str[1001];
    gets(str);
    unsigned int bin = ToInt(str);
    // printf("%u\n", bin);

    unsigned int x = bin;
    ToBinary(x, 8);
    // puts(str);
    // printf("%d = %s\n", x, ToBinary(x, 8).str);
    for (int i = 7; i >= 0; i--)
    {
        if (getBit(x, i) == 1)
        {
            printf("Flipping Leftmost 1 bit: %s\n", ToBinary(clearBit(x, i), 8).str);
            break;
        }
    }
    return 0;
}