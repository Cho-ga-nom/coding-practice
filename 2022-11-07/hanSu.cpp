/**
 * 백준 실버 4 문제
 * 한 수 구하기
 */

#include <iostream>
using namespace std;
void hanSu(int); // 한 수를 구하는 함수

int main()
{
  int num;
  cin >> num; // 숫자 입력

  hanSu(num);
  return 0;
}

void hanSu(int num)
{
  int i, temp1, temp2; // 각 자릿수의 차이를 저장할 변수
  int count = 0;       // 한 수의 개수를 저장할 변수

  for (i = 1; i <= num; i++) // 입력받은 숫자까지 반복
  {
    if (i < 100) // 10의 자리수까지는 계속 카운트
    {
      count++;
    }
    else if (i >= 100)
    {
      temp1 = ((i / 10) / 10) - ((i / 10) % 10); // 백의 자리와 십의 자리 숫자 차이
      temp2 = ((i / 10) % 10) - (i % 10);        // 십의 자리와 일의 자리 숫자 차이

      if (temp1 == temp2) // 차이가 같으면 카운트
      {
        count++;
      }
    }
  }

  cout << count << endl;
}