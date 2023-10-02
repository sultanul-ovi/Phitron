#include<stdio.h>
#include<string.h>

int find_firstIndex(char *str,char c)
{
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==c)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    char ar[]="abcdabcd";
    printf("%d\n",find_firstIndex(ar,'c'));
    return 0;
}
