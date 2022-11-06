/**
 * 백준 실버 5 문제
 * 셀프 넘버 구하기
 *
 */
#include <iostream>
using namespace std;
void selfNumber(); // 셀프 넘버 구하는 함수

int main()
{
  selfNumber();
  return 0;
}

void selfNumber()
{
  int i, k, temp, flip;

  for (i = 1; i <= 10000; i++) // 1부터 10000까지 반복
  {
    if (i == 1) // i가 1이면 셀프 넘버 출력 후 다시 반복
    {
      cout << i << endl;
      continue;
    }

    for (k = 1; k < i; k++) // 2부터 셀프 넘버인지 검사
    {
      temp = k + (k / 1000) + ((k % 1000) / 100) + (((k % 1000) % 100) / 10) + (k % 10);
      // 1부터 i보다 작은 수까지 반복하여 계산식에 대입

      if (i == temp) // 계산한 값이 i와 같으면 (i의 생성자가 존재하면)
      {
        flip = 0; // 셀프 넘버가 아니라는 표시를 해줌
        break;    // 끝까지 반복하지 않도록 발견하면 바로 break
      }
    }

    if (flip == 1) // 위에서 조건문에 걸리지 않으면 flip값을 보고 셀프 넘버로 판별
    {
      cout << i << endl;
    }

    flip = 1; // 다음 반복을 위해 flip 값을 1로 초기화
  }
}