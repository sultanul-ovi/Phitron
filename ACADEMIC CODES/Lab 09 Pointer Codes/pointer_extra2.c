/// manipulating array using pointer
// base address of an array = address of the first element of the array
#include <stdio.h>
int main()
{
  int i, x[6], sum = 0;

  printf("Enter 6 numbers: \n");
  for (i = 0; i < 6; ++i)
    printf("Memory location of x[%d]: %p\n", i, x + i);
  printf("\n");
  for (i = 0; i < 6; ++i)
    printf("Memory location of x[%d]: %p\n", i, &x[i]);
  printf("\n");
  for (i = 0; i < 6; ++i)
    printf("Values at location of x[%d]: %d\n", i, *(x + i));
  printf("\n");
  for (i = 0; i < 6; ++i)
    printf("Memory location of x[%d]: %d\n", i, &x[i]);
  //printf("Sum = %d", sum);
  return 0;
}
