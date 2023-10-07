/// library function - strlen(), strcpy(), strcat(), strrev(), strcmp()
#include <stdio.h>
#include <string.h>
void main() 
{
    char s1[10], s2[10];
    
    //strlen
    char name[100] = "Sultanul Islam Ovi";
    printf("%d\n",sizeof(name));
    printf("%d\n",strlen(name));

    //strcpy
    char src[100] = "Ovi";
    gets(src);
    char des[20];
    strcpy(des,src);
    puts(des);
    puts(src);

    strcpy(des,"Ovi");
    puts(des);

    //strcat
    char first_name[50] = "Sultanul Islam ";
    char last_name[50] = "Ovi";
    strcat(first_name,last_name);
    puts(first_name);

    //strcat
    char test[50];
    gets(test);
    puts(test);
    strrev(test);
    puts(test);


    //strcmp
    gets(s1); // apple ant, hello ovi, sultanul ovi
    gets(s2); //nadim, Nadim
    int compare = strcmp(s1, s2); // 1,-1,0
    if (compare > 0) //1
    {
        printf("%s is the larger string, %s is the smaller string.\n", s1, s2);
    }
    else if (compare < 0) //-1
    {
        printf("%s is the larger string, %s is the smaller string.\n", s2, s1);
    }
    else //0
    {
        printf("Both strings are same.");
    }
}
