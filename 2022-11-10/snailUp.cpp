/**
 * 백준 실버 5 문제
 * 달팽이는 올라가고 싶다
 */

#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
  unsigned int up, down, height, i;
  cin >> up >> down >> height;

  /**
   * 실수가 나올 경우 때문에 1을 미리 빼두고 몫에 1을 더한다.
   * 그다음 int로 형변환
   */
  cout << (int)(height - down - 1) / (up - down) + 1 << endl;
  return 0;
}