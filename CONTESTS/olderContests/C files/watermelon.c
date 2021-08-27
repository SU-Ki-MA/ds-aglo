#include <stdio.h>
#include <conio.h>
void main()
{
  int w;
  scanf("%d", &w);
  if (w % 2 == 0)
  {
    if (w <= 2)
    {
      puts("NO");
    }
    else
    {
      puts("YES");
    }
  }
  else
  {
    puts("NO");
  }
}