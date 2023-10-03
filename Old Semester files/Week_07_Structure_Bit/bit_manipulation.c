#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Binary
{
    char str[50];
};
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
unsigned int setBit(unsigned int mask, int k)
{
    return mask | (1 << k);
}
unsigned int clearBit(unsigned int mask, int k)
{
    return mask & ~(1 << k);
}
unsigned int flipBit(unsigned int mask, int k)
{
    return mask ^ (1 << k);
}

unsigned char RR(unsigned char mask, int k)
{
    int lastk = mask & ((1<<k)-1);
    unsigned char ans = (mask >> k) | (lastk <<(8-k));

}
int main()
{
    int x = 54;
    printf("%d = %s\n", x, ToBinary(x, 8).str);
    for (int i = 0; i < 8; i++)
    {
        printf("%d th bit: %d\t", i, getBit(x, i));
        printf("Clear: %s\t", ToBinary(clearBit(x,i),8).str);
        printf("Set: %s\t", ToBinary(setBit(x,i),8).str);
        printf("Flip: %s\n", ToBinary(flipBit(x,i),8).str);
    }
    return 0;
}