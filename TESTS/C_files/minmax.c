#include <stdio.h>
#include <conio.h>
void main()
{
  int a[10], min, max, n, i;
  clrscr();
  puts("Enter no of elemants :");
  scanf("%d", &n);
  puts("Enter the elements :");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  min = a[0];
  max = a[0];
  for (i = 0; i < n; i++)
  {
    if (a[i] > max)
      max = a[i];
    if (a[i] < min)
      min = a[i];
  }
  printf("MAX is : %d\n", max);
  printf("MIN is : %d\n", min);
  getch();
}