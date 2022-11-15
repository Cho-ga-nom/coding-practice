/**
 * 백준 실버 5 문제
 * 소수 구하기
 */

#include <iostream>
using namespace std;

int main()
{
  int num, i, k;
  int count = 0;
  int key = 1; // 소수인지 아닌지 판별하는 변수
  int *arr;

  cin >> num;
  arr = new int[num]; // 입력받은 개수만큼 배열 동적할당

  for (i = 0; i < num; i++)
  {
    cin >> arr[i];
  }

  for (i = 0; i < num; i++)
  {
    if (arr[i] == 1) // 1은 소수가 아니기에 건너뜀
    {
      continue;
    }
    for (k = 2; k < arr[i]; k++)
    {
      if ((arr[i] % k) == 0) // 나머지연산으로 나누어 떨어지는지 검사
      {
        key = 0; // 나누어떨어지는 값이 있으면 key = 0으로 소수가 아님을 판별
        break;
      }
    }

    if (key == 1) // key = 1일때만 count++
    {
      count++;
    }

    key = 1; // 다음 검사를 위해 key를 1로 바꿔줌
  }

  cout << count << endl;
  return 0;
}