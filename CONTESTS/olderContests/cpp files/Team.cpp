#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;
int main()
{
  int n, S = 0, p, v, t;
  cin >> n;
  while (n--)
  {
    cin >> p >> v >> t;
    if ((p + v + t) > 1)
    {
      S++;
    }
  }
  cout << S;
}