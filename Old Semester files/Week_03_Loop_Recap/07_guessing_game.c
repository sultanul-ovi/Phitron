#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

int main()
{
    srand(time(0));
    int hidden = rand() % 100 + 1;
    // printf("%d\n", hidden);
    int count = 0;
    while (true)
    {
        int guess;
        scanf("%d", &guess);
        if (guess == hidden)
        {
            printf("You are right.\n");
            break;
        }
        else if (guess > hidden)
        {
            printf("Guess smaller.\n");
        }
        else
        {
            printf("Guess larger.\n");
        }
        count++;
        if (count == 5)
        {
            printf("You failed stupid\n");
            break;
        }
    }

    return 0;
}
