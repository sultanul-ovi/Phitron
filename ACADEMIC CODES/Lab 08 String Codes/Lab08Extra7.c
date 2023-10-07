///C program to take a string from the user and find the frequncy of a user given character in that string.
#include <stdio.h>
#include <string.h>

int main()
{
  char str[100], ch;
  int count = 0;

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  // printf("Enter a character to find its frequency: ");
  // scanf("%c", &ch);

  // for (int i = 0; str[i] != '\0'; i++)
  // {
  //   if (ch == str[i])
  //     count++;
  // }
  // printf("Frequency of %c = %d\n\n", ch, count);
  char c;
  for (c = 'a'; c <= 'z'; c++)
  {
    count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
      if (c == str[i])
        count++;
    }
    if (count > 0)
      printf("Frequency of %c = %d\n\n", c, count);
  }
  return 0;
}
