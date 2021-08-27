#include <stdio.h>
#include <conio.h>
void main()
{
  int day;
  clrscr();
  puts("Enter the day : ");
  scanf("%d", &day);
  switch (day)
  {
  case 1:
    puts("Sunday");
    break;
  case 2:
    puts("Monday");
    break;
  case 3:
    puts("Tuesday");
    break;
  case 4:
    puts("Wednesday");
    break;
  case 5:
    puts("Thursday");
    break;
  case 6:
    puts("Friday");
    break;
  case 7:
    puts("Saturday");
    break;
  default:
    puts("Enter no in range 1-7");
    break;
  }
  getch();
}