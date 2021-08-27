#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cstdio>

int main()
{
  int n = 0, k = 0, s = 0;
  std::cin >> n >> k;
  int a[50] = {0};
  for (int i = 0; i < n; i++)
  {
    std::cin >> a[i];
  }
  int i = 0;
  while ((a[i] > 0) && (a[i] >= a[k - 1]) && (i < n))
  {
    s += 1;
    i++;
  }
  std::cout << s;
}