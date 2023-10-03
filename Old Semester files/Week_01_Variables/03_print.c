#include <stdio.h>

int main()
{
    printf("Hello World\n");
    printf("Ovi");

    printf("\nHello World\tOvi");
    printf("\nOvi\n");

    int marks = 100;
    int price = 50;

    // format/type specifier
    printf("Marks: %d\n", marks);
    printf("Marks: %d\n", marks - 5);
    printf("Marks: %d\tPrice: %d\n", marks, price);

    float temp = 3.4;
    printf("Temp: %d\n", temp); //garbage value
    printf("Temp: %f\n", temp);
    return 0;
}