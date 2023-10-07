#include <stdio.h>
#include <string.h>

int main(){

int lengthS, lengthP, i, j, count = 0;
char string1[10000], string2[100];

printf("Enter your string: ");
gets(string1);

printf("Enter the pattern for matching: ");
gets(string2);

lengthS = strlen(string1);
lengthP = strlen(string2);


for(i=0; i<lengthS; i++){

    for(j=0; j<lengthP; j++){

        if(string1[i+j] !=string2[j])
            break;
    }
    if(j == lengthP)
    {
        count++;
        printf("Pattern found in location: %d \n", i);
    }

}
if(count == 0)
{
    printf("No pattern found!!!");
}
else
    printf("No of %d occurences found", count);

}

