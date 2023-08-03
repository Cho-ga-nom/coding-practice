#include <iostream>
using namespace std;

int main()
{
  unsigned int fixfee, varfee, price;
  cin >> fixfee >> varfee >> price;

  if (varfee >= price)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << fixfee / (price - varfee) + 1 << endl;
  }
  return 0;
}