/**
 * 백준 브론즈 2 문제
 * 손익분기점
 */

#include <iostream>
using namespace std;

int main()
{
  unsigned int fixfee, varfee, price;
  cin >> fixfee >> varfee >> price;

  if (varfee >= price) // 가변 비용이 제품 가격과 같거나 더 크면 손익분기점이 생기지 않음
  {
    cout << -1 << endl;
  }
  else // fixfee + (varfee * x) < price * x 수식을 아래와 같이 정리하여 손익분기점 구함
  {
    cout << fixfee / (price - varfee) + 1 << endl;
  }
  return 0;
}