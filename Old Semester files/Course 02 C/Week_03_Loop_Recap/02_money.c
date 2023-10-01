#include <stdio.h>

int main()
{
    int money = 0;
    int target = 100;
    printf("\n");

    while (money < target)
    {
        printf("Give me money: ");
        int given;
        scanf("%d", &given);
        money = money + given;
        printf("Current money: %d\n", money);
    }
}