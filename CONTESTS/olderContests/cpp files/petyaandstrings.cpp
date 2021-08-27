#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a, b;
  cin >> a >> b;
  int no = strcmpi(a.c_str(), b.c_str());
  cout << no;
}