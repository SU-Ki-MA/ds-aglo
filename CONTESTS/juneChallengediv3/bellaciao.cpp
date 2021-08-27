#include <iostream>
int main()
{
  long int t;
  std::cin >> t;
  while (t--)
  {
    long long int n, no, a, d;
    std::cin >> n >> no >> a >> d;
    long long int op = 0;
    int nn = (int)n / no;
    op += (no * (nn * ((2 * a) + (nn - 1) * d))) / 2;
    op += (n % no) * (a + (nn * d));
    std::cout << op << std::endl;
  }
  return 0;
}