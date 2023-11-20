#include<stdio.h>

int get_length(char *str)
{
    int index=0;    // take an index as the first index
    while(str[index]!='\0')     // while this index's value is not null, means string is not at the end, just go ahead. That means index++
    {
        index++;
    }
    return index;   // If the the length 10, then the last index is 9. But after the loop index will increase one more, that is 10. The reason behind this is the loop ends when there is a null, and the index of null is one extra then the last index of that string
}
int main()
{
    char ar[]="HelloPhitron";
    printf("%d\n",get_length(ar));
    return 0;
}
