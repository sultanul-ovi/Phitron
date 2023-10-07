#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 100
#define SIZE 1000

struct Product
{
    int item_no;
    char item_name[MAX_LEN + 1];
    int on_hand;
    float price;
};

void Insert(struct Product items[], int i)
{
    printf("Put Item No:");
    scanf("%d", &items[i].item_no);
    fflush(stdin);
    printf("Put Item Name:");
    gets(items[i].item_name);
    printf("Put Item On Hand:");
    scanf("%d", &items[i].on_hand);
    printf("Put Item Price:");
    scanf("%f", &items[i].price);
}

int Search(struct Product items[], int ix)
{
    printf("Enter product name: ");
    char tn[MAX_LEN + 1];
    fflush(stdin);
    gets(tn);
    int index = 999;
    int i = 0;
    while (i <= ix)
    {
        if (strcasecmp(items[i].item_name, tn) == 0)
            index = i;
        i++;
    }
    return index;
}

void Print(struct Product items[], int ix)
{
    int x;
    x = Search(items, ix);
    if (x == 999)
        printf("\nItem not found.\n\n");
    else
    {
        printf("\nProduct Details:\t");
        printf("%d\t%s\t%d\t%.2f\n", items[x].item_no, items[x].item_name, items[x].on_hand, items[x].price);
    }
}

void Update(struct Product items[], int ix)
{
    int x;
    x = Search(items, ix);
    if (x == 999)
        printf("\nItem not found.\n\n");
    else
    {
        printf("Update Item On Hand:");
        scanf("%d", &items[x].on_hand);
        printf("Update Item Price:");
        scanf("%f", &items[x].price);
        printf("\nUpdated Product Details:\t");
        printf("%d\t%s\t%d\t%.2f\n", items[x].item_no, items[x].item_name, items[x].on_hand, items[x].price);
    }
}

void PrintAll(struct Product items[], int ix)
{
    for (int i = 0; i <= ix; i++)
    {
        printf("%d\t%s\t%d\t%.2f\n", items[i].item_no, items[i].item_name, items[i].on_hand, items[i].price);
    }
}

int main()
{
    struct Product items[SIZE];
    int Index = -1;
    int x = 0;

    char ch = '\0';
    while (ch != 'q')
    {
        printf("\n-------------------------\n");
        printf("Press i: Insert \n      s: Search\n      u: Update\n      p: Print\n      a: Print All\n      q: Quit");
        printf("\n-------------------------\n\n");
        fflush(stdin);
        scanf("%c", &ch);
        tolower(ch);
        switch (ch)
        {
        case 'i':
            Index++;
            Insert(items, Index);
            break;
        case 's':
            x = Search(items, Index);
            if (x == 999)
                printf("\nItem not found.\n\n");
            else
                printf("\nItem found at position %d.\n\n", x + 1);
            break;
        case 'u':
            Update(items, Index);
            break;

        case 'p':
            Print(items, Index);
            break;
        case 'a':
            PrintAll(items, Index);
            break;

        case 'q':
            printf("\n\tTHANK YOU\n\n");
            break;
        }
    }

    return 0;
}
