/**
 * 백준 브론즈 4 문제
 * 주사위 게임 상금 구하기
 */

#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3; // 주사위 값 3개를 입력받을 변수
  int maxNum;           // 최대값을 저장할 변수

  cin >> num1 >> num2 >> num3;
  maxNum = num1; // 우선 최대값을 num1로 저장

  if (num1 == num2) // 주사위 두 개의 값이 같다면
  {
    if (num1 == num3) // 나머지 값도 같은지 검사
    {
      cout << 10000 + (num1 * 1000) << endl; // 주사위 세 개의 값이 전부 같을 경우
    }
    else // 두 개만 같을 경우
    {
      cout << 1000 + (num1 * 100) << endl;
    }
  }
  else if (num1 == num3) // 두 개만 같을 경우2
  {
    cout << 1000 + (num1 * 100) << endl;
  }
  else if (num2 == num3) // 두 개만 같을 경우3
  {
    cout << 1000 + (num2 * 100) << endl;
  }
  else // 셋 다 값이 다를 경우
  {
    maxNum = (maxNum > num2) ? maxNum : num2; // 최대값을 구해서 상금 계산
    maxNum = (maxNum > num3) ? maxNum : num3;
    cout << maxNum * 100 << endl;
  }

  return 0;
}