#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 100
#define n 2
struct items
{
    int item_no;
    char item_name[MAX_LEN + 1];
    float price;
};

struct items i[100];

void DisplayItems(struct items product)
{
    printf("Item Info: %d %s %.2f\n", product.item_no, product.item_name, product.price);
}

int main()
{

    for (int x = 0; x < n; x++)
    {
        scanf("%d", &i[x].item_no);
        fflush(stdin);
        gets(i[x].item_name);
        scanf("%f", &i[x].price);
    }
    for (int x = 0; x < n; x++)
    {
        DisplayItems(i[x]);
    }
}
