#include <stdio.h>
#include <conio.h>
struct grade
{
  char name[10];
  float mark;
  char grade;
};

void main()
{
  struct grade std[5];
  int i = 0;
  for (i = 0; i < 5; i++)
  {
    printf("Enter name of %d student ", i + 1);
    scanf("%s", &std[i].name);
    printf("Enter mark of %d student ", i + 1);
    scanf("%f", &std[i].mark);
    if (std[i].mark <= 100 && std[i].mark >= 80)
    {
      std[i].grade = 'A';
    }
    else if (std[i].mark < 80 && std[i].mark >= 60)
    {
      std[i].grade = 'B';
    }
    else if (std[i].mark < 60 && std[i].mark >= 40)
    {
      std[i].grade = 'C';
    }
    else
    {
      std[i].grade = 'F';
    }
  }
  for (i = 0; i < 5; i++)
  {
    printf("\nStudent %d", i + 1);
    printf("\nName  : %s", std[i].name);
    printf("\nMark  : %f", std[i].mark);
    printf("\nGrade : %c", std[i].grade);
  }
}