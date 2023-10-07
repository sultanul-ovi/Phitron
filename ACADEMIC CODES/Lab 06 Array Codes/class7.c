#include <stdio.h>

int main()
{

    int i = 0, j = 0,year,size;
    float max, min, base;


    printf("Enter maximum interest rate\n");
    scanf("%f", &max);
    printf("Enter minimum interest rate\n");
    scanf("%f", &min);
    printf("Enter number of years\n");
    scanf("%d", &year);
    printf("Enter base amount\n");
    scanf("%f", &base);

    size = (int)(max-min+1);
    float c_i[size];

    for (i = 0; i < size; i++)
        c_i[i] = base;

    for (i = 0; i < year; i++)
    {
        for (j = 0; j < size; j++)
        {
            c_i[j] = c_i[j] + c_i[j]*(min + j)/100;
            printf("%.2f\t",c_i[j]);
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}