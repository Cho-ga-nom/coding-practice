/**
 * 백준 브론즈 1 문제
 * 소인수분해
 */

#include <iostream>
using namespace std;

int main()
{
  int num;
  int i = 2;

  cin >> num;

  if (num == 1)
  {
    return 0;
  }

  while (i <= num)
  {
    if ((num % i) == 0)
    {
      cout << i << endl;
      num /= i;
      i = 1; // 밑에 i++가 있어서 1로 초기화
    }

    i++;
  }

  return 0;
}