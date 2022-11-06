/**
 * 백준 브론즈 4 문제
 * 숫자의 합 구하기
 */

#include <iostream>
using namespace std;

int main()
{
  int num, i;
  int sum = 0;
  char str[100];

  cin >> num;
  cin >> str;

  for (i = 0; i < num; i++)
  {
    sum += int(str[i]) - 48; // 형변환 해서 아스키 코드 값만큼 빼줌
  }

  cout << sum << endl;
  return 0;
}