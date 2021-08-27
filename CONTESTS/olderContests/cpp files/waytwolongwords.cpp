#include <iostream>
#include <vector>
#include <string>
#include <cstring>
int main()
{
  int n = 0;
  std::cin >> n;
  std::vector<std::string> userInputVec;
  std::string input;
  for (int i = 0; i < n; i++)
  {
    std::cin >> input;
    if (strlen(input.c_str()) <= 10)
    {
      userInputVec.push_back(input);
    }
    if (strlen(input.c_str()) > 10)
    {
      std::string result = input.substr(0, 1) + std::to_string(strlen(input.c_str()) - 2) + input.substr(strlen(input.c_str()) - 1);
      userInputVec.push_back(result);
    }
  }
  for (int i = 0; i < userInputVec.size(); ++i)
  {
    std::cout << userInputVec[i] << std::endl;
  }
}