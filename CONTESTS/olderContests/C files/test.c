#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
  char a[5], b[5];
  gets(a);
  gets(b);
  printf("%d", strcmpi(a, b));
}
