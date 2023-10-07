///Take 5 numbers in an array and print them in reverse order.
#include<stdio.h>
void print(int);
int main()
{
    int original[5] = {1,2,3,4,5};
    for(int i=4;i>=0;i--)
    {
      print(original[i]);
    }
    return 0;
}

void print(int x)
{
   printf("%d   ",x);
}
