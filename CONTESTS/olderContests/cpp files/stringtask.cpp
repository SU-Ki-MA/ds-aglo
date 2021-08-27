#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a;
  cin >> a;
  transform(a.begin(), a.end(), a.begin(), ::tolower);
  for (int i = 0; i < strlen(a.c_str()); i++)
  {
    if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'y')
    {
      a.erase(i, 1);
      i = i - 1;
    }
  }
  for (int i = 0; i < strlen(a.c_str()); i = i + 2)
  {
    a.insert(i, 1, '.');
  }
  cout << a << endl;
}