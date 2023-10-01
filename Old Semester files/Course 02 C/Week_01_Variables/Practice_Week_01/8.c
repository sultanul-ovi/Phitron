#include <stdio.h>

int main()
{
    int x,y;

    printf("Enter height of rectangle: ");
    scanf("%d",&x);
        printf("Enter width of rectangle: ");
    scanf("%d",&y);

    int area = x*y;
    int perimeter = 2*(x+y);

    printf("Area is %d\nPerimeter is %d",area,perimeter);

    return 0;
}