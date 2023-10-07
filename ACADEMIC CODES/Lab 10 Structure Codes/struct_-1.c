#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 100

struct items
{                // items is called tag , structure tag
    int item_no; // member variables
    char item_name[MAX_LEN + 1];
    float price;
} i4 = {9, "Chocolate", 50};

struct items i1, i2, i3; // structure type variable
int main()
{
    i1.item_no = 3;
    struct items i[1000];
    strcpy(i1.item_name, "Soap");
    // i1.item_name = "Soap"; // Not okay
    i1.price = 25;

    i2.item_no = 5;
    strcpy(i2.item_name, "Ice Cream");
    i2.price = 40;

    scanf("%d", &i3.item_no);
    fflush(stdin);
    gets(i3.item_name);
    // fgets(i3.item_name,sizeof(i3.item_name),stdin);
    scanf("%f", &i3.price);

    printf("Item Info: %d %s %.2f\n", i1.item_no, i1.item_name, i1.price);
    printf("Item Info: %d %s %.2f\n", i2.item_no, i2.item_name, i2.price);
    printf("Item Info: %d %s %.2f\n", i3.item_no, i3.item_name, i3.price);
    printf("Item Info: %d %s %.2f\n", i4.item_no, i4.item_name, i4.price);

    for (int x = 0; x < 5; x++)
    {
        scanf("%d", &i[x].item_no);
        fflush(stdin);
        gets(i[x].item_name);
        scanf("%f", &i[x].price);
    }
    for (int x = 0; x < 5; x++)
    {
        printf("Item Info: %d %s %.2f\n", i[x].item_no, i[x].item_name, i[x].price);
    }
}
