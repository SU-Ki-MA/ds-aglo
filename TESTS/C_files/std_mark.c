#include <stdio.h>
#include <conio.h>
struct std
{
  int rno;
  char name[20];
  int m1, m2, m3;
  float avg, tot;
} s[20];
void main()
{
  int i, no;
  clrscr();
  puts("Enter no of students :");
  scanf("%d", &no);
  for (i = 0; i < no; i++)
  {
    puts("\nRoll no : ");
    scanf("%d", &s[i].rno);
    puts("\nName : ");
    scanf("%s", &s[i].name);
    puts("\nMark 1 : ");
    scanf("%d", &s[i].m1);
    puts("\nMark 2 : ");
    scanf("%d", &s[i].m2);
    puts("\nMark 3 : ");
    scanf("%d", &s[i].m3);
    s[i].tot = s[i].m1 + s[i].m2 + s[i].m3;
    s[i].avg = s[i].tot / 3;
  }
  for (i = 0; i < no; i++)
  {
    printf("\nRoll no : %d", s[i].rno);
    printf("\tName : %s", s[i].name);
    printf("\tTotal : %f", s[i].tot);
    printf("\tAverage : %f", s[i].avg);
  }
  getch();
}