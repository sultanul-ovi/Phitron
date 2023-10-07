#include <stdio.h>
#include <string.h>
// string = char array
/*
null character = '\0'
int // 4 bytes
float // 4 bytes
double // 8 bytes
char // 1byte
011101010101
ovi OVI
'o' 'v' 'i' '\0'
111 118 105
1101111
memory size = 1 byte = 8bits 
ASCII table
*/
// strlen,strrev, strcpy, strcat, strcmp
int main()
{
    char name[99];
    // gets(name);
    // puts(name);
    // printf("%d\n",sizeof(name));
    // printf("%d\n",strlen(name));
    
    //strrev(name);
    // puts(name);
    // char s[100];
    // strcpy(s,name);
    // puts(s);

    char s1[100] = "ovi"; 
    char s2[100] = "ovi";
    
    int c = strcmp(s1,s2);
    printf("%d",c);


}