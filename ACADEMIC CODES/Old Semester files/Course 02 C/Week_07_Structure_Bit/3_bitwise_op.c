#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void ToBinary(unsigned int val, char str[], int k)
{
    int idx = 0;
    while (val)
    {
        int rem = val % 2;
        val = val / 2;
        str[idx] = '0' + rem;
        idx++;
    }
    while ((idx + 1) != k)
    {
        str[idx] = '0';
        idx++;
    }
    str[idx] = '\0';
    strrev(str);
}

int main()
{
    char sx[1001], sy[1001], sand[1001], sor[1001], sxor[1001], snoty[1001], lshift[1001], rshift[1001];
    unsigned int x = 25;
    unsigned int y = 10;
    ToBinary(x, sx, 8);
    puts(sx);
    ToBinary(y, sy, 8);
    puts(sy);

    // unsigned int and = x & y;
    // printf("%d\n", and);

    // ToBinary(and, sand, 8);
    // puts(sand);

    // unsigned int or = x | y;
    // printf("%d\n", or);

    // ToBinary(or, sor, 8);
    // puts(sor);

    // unsigned int xor = x ^ y;
    // printf("%d\n", xor);

    // ToBinary(xor, sxor, 8);
    // puts(sxor);

    // unsigned int noty = ~y;
    // printf("%d\n", noty);

    // ToBinary(noty, snoty, 8);
    // puts(snoty);

    int lx = x << 1;
    printf("%d\n", lx);

    ToBinary(lx, lshift, 8);
    puts(lshift);

    int rx = x >> 1;
    printf("%d\n", rx);

    ToBinary(rx, rshift, 8);
    puts(rshift);

    return 0;
}
