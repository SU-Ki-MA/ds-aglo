
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
  long a;
  cin >> a;
  long b[100000];
  long c[100000];
  for (int i = 0; i < a; i++)
  {
    int d = 0, e = 0;
    cin >> d;
    cin >> e;
    b[i] = d;
    c[i] = e;
  }
  for (int i = 0; i < a; i++)
  {
    long f = 0;
    if (b[i] > c[i])
    {
      long n = 0;
      n = floor(b[i] / 2);
      n += c[i];
      long gg = n - b[i];
      if (gg < 0)
      {
        gg = -gg;
      }
      f = n - gg;
      if (f < 0)
      {
        f = -f;
      }
    }
    else
    {
      f = b[i] - c[i];
      if (f < 0)
      {
        f = -f;
      }
    }
    cout << f << endl;
  }
}