#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // srand(time(NULL));
    // printf("%d\n",rand());

    const char suit[] = {'c', 'd', 'h', 's'};
    const char rank[] = {'2', '3', '4', '5', '6', '7', '8', '9', 't', 'j', 'q', 'k', 'a'};

    srand(time(NULL));
    //printf("%c of %c\t",rank[rand()%13],suit[rand()%4]);

    printf("How many cards you want to draw?\n");
    int n;
    scanf("%d", &n);

    char cards[n][2];
    for (int i = 0; i < n; i++)
    {
        cards[i][0] = rank[rand() % 13];
        cards[i][1] = suit[rand() % 4];
        printf("%c_%c\t",cards[i][0],cards[i][1]);
    }
    printf("\n");
    return 0;
}