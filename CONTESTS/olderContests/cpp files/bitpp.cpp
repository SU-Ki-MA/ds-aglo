#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cstdio>

int main()
{
  int x = 0, n = 0;
  std::cin >> n;
  while (n--)
  {
    std::string c;
    std::cin >> c;
    c[1] == '+' ? ++x : --x;
  }
  std::cout << x;
}