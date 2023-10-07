/// array as a structure member variable

#include <stdio.h>
#define m 4
struct bill
{
   int gas[m];
   char name[20];
};
struct bill c1, c2;

void main()
{

   printf("Name of Customer 01:");
   gets(c1.name);
   printf("Name of Customer 02:");
   gets(c2.name);

   printf("Gas bills of 1st quarter of year for Mr. %s\n", c1.name);
   for (int i = 0; i < m; i++)
   {
      printf("bill of month %d: ", i + 1);
      scanf("%d", &c1.gas[i]);
   }

   printf("Gas bills of 1st quarter of year for Mr. %s\n", c2.name);
   for (int i = 0; i < m; i++)
   {
      printf("bill of month %d: ", i + 1);
      scanf("%d", &c2.gas[i]);
   }
}
