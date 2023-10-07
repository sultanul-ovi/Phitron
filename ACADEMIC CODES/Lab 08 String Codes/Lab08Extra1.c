/*

*/
// String declaration, gets, puts, fgets function

#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("Enter your name: ");
    //scanf("%s",name);
    //gets(name);
    fgets(name,sizeof(name),stdin);
    printf("Size of String name: %d\n", sizeof(name));
    //printf("My name is %s\n",name);
    puts(name);
    return 0;
}
