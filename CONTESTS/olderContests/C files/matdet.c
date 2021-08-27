#include <stdio.h>
#include <conio.h>
int det(int mat[50][50], int index);
void main()
{
  int a[50][50], i, j, n, detans;
  puts("Enter Square Matrix Index : ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }
  detans = det(a, n);
  printf("The determinant is : %d", detans);
  getch();
}
int det(int mat[50][50], int index)
{
  int i = 0, j, k, l, m = 0, n = 0, index1 = index - 1;
  int mat2[50][50], d = 0;
  for (j = 0; j < index; j++)
  {
    for (k = 0; k < index; k++)
    {
      for (l = 0; l < index; l++)
      {
        if (k == i)
        {
          continue;
        }
        if (l = j)
        {
          continue;
        }
        mat2[m][n] = mat[k][l];
        n++;
      }
      m++;
    }
    if (index1 == 1)
    {
      return mat2[0][0];
    }
    if (j % 2 != 0)
    {
      d += -mat[i][j] * det(mat2, index1);
    }
    else
    {
      d += mat[i][j] * det(mat2, index1);
    }
  }
  return d;
}