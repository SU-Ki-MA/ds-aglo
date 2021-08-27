#include <bits/stdc++.h>
using namespace std;
int main()
{
  int m = 0, n = 0, no = 0, x = 0;
  cin >> m >> n;
  n % 2 == 0 ? x += (n / 2) : x += ((n - 1) / 2);
  m % 2 == 0 ? no += (m / 2) *n : no += (((m - 1) / 2) * n) + x;
  cout << no;
}