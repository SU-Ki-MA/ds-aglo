#include <stdio.h>
#include <conio.h>
void main()
{
  long decimalnum, remainder, quotient;
  int octalNumber[100], i = 1, j;
  clrscr();
  printf("Enter the decimal number: ");
  scanf("%ld", &decimalnum);
  quotient = decimalnum;
  while (quotient != 0)
  {
    octalNumber[i++] = quotient % 8;
    quotient = quotient / 8;
  }
  printf("Equivalent octal value of decimal no %d: ", decimalnum);
  for (j = i - 1; j > 0; j--)
    printf("%d", octalNumber[j]);
  getch();
}