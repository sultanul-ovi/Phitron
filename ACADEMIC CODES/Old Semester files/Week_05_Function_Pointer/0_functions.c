#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void display()
{
    printf("Hello World\n");
}
void displayName(char name[])
{
    printf("%s\n", name);
}

int main()
{
    display();
    displayName("Ovi");
    return 0;
}
