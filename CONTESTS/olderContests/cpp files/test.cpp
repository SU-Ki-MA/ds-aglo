#include <iostream>
#include <cstring>
#include <string>
#include <vector>
int main()
{
  int n = 0;
  int a = 0;
  std::cin >> n;
  std::cout << "No of problems : " << n << std::endl;
  for (int i = 0; i < n; i++)
  {
    std::string al = "";
    std::cin >> al;
    std::cout << al;
  }
}