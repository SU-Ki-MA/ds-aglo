#include <stdio.h>
#include <conio.h>
void main()
{
  int a[10], i, j, n, temp;
  clrscr();
  printf("Enter no of elements : ");
  scanf("%d", &n);
  printf("Enter the elements : ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (a[i] > a[j])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  puts("Ascending :");
  for (i = 0; i < n; i++)
  {
    printf("\t %d", a[i]);
  }
  getch();
}