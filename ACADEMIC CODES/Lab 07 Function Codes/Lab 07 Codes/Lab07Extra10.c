/// local and global variable

#include<stdio.h>
#define pi 3.1416
int class_size = 50;
int updated_class_size(int x)
{
    class_size = class_size - x;
    return class_size;
}

int main()
{
    int present_student=27,dropout;
    printf("Absent student today: %d\n", class_size-present_student);
    printf("Enter the dropout student:");
    scanf("%d", &dropout);
    int update = updated_class_size(dropout);
    printf("Continued student number: %d\n",update);
    printf("After dropout calculation updated class size: %d",class_size);
    return 0;
}


