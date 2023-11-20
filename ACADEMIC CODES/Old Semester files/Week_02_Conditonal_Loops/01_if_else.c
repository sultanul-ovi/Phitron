#include <stdio.h>

int main()
{
    int marks;
    scanf("%d", &marks);

    /*

    if(condition){
        statements;
    }
    else{
    statements;
    }

    */
    if (marks >= 40)
    {
        printf("You have passed.\n");
        printf("Congratulations.\n");
    }
    else
    {
        printf("You have failed.\n");
    }
}