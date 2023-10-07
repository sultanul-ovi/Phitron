///C program to compare two strings without using strcmp function
#include <stdio.h>
#include <string.h>

int main()
{
  char s1[100],s2[100];
  int i=0;
  printf("Enter two string: ");
  gets(s1);
  gets(s2);

  while(s1[i] == s2[i] && s1[i] != '\0')
    i++;
  if(s1[i]>s2[i])
    printf("s1 is greater than s2");
  else if(s1[i] < s2[i])
    printf("s1 is less than s2");
  else
    printf("s1 and s2 are equal");
  return 0;
}
