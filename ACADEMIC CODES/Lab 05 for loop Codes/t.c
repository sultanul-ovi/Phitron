#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int num1;
    FILE *fptr;
    char s[15];
    fptr = fopen("input.txt", "r");

    fscanf(fptr, "%s %d", s, &num1);

    FILE *fptr1;
    fptr1 = fopen("output.txt", "w");


    int n, i = 3, count, c;
    n = num1;

    if (!strcmp(s, "prime"))
    {
        if (n >= 1)
            printf("2 ");
        fprintf(fptr1, "%d ", 2);

        for (count = 2; count <= n; i++)
        {
            // iteration to check c is prime or not
            for (c = 2; c < i; c++)
            {
                if (i % c == 0)
                    break;
            }

            if (c == i) // c is prime
            {
                printf("%d ", i);
                fprintf(fptr1, "%d ", i);
                count++; // increment the count of prime numbers
            }
        }
    }
    if (!strcmp(s, "exponential"))
    {
        int k;
        double num = 1;
        for (k = 1; k <= n; k++)
        {
            printf("%.0f ", pow(num, num));
            fprintf(fptr1, "%.0f ", pow(num, num));
            num = num + 1;
        }

        fclose(fptr);
        fclose(fptr1);
        return 0;
    }
}