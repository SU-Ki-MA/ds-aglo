#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
  int i, j, c;
  char list[50][50], temp[50];
  clrscr();
  puts("enter no. of string : ");
  scanf("%d", &c);
  for (i = 0; i < c; i++)
  {
    printf("\n Enter the string %d: ", i + 1);
    scanf("%s", &list[i]);
  }
  for (i = 0; i < c; i++)
  {
    for (j = i + 1; j < c; j++)
    {
      if (strcmp(list[i], list[j]) > 0)
      {
        strcpy(temp, list[i]);
        strcpy(list[i], list[j]);
        strcpy(list[j], temp);
      }
    }
  }
  puts("\nAscending order :\n");
  for (i = 0; i < c; i++)
  {
    puts("\n");
    puts(list[i]);
  }
  getch();
}
