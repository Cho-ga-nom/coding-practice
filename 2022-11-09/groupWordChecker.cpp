/**
 * 백준 실버 5 문제
 * 그룹 단어 체커
 */

#include <iostream>
#include <string>
using namespace std;

string *arr;

void GroupWord(int num)
{
  int i, k, j, key; // key는 groupword인지 아닌지 판별하는 변수
  int count = 0;

  if (arr == NULL) // NULL 포인터 에러
  {
    cout << "Error!" << endl;
    return;
  }

  for (i = 0; i < num; i++)
  {
    if (arr[i].size() <= 2) // 2어절까지는 전부 그룹 단어로 판별
    {
      count++;
    }
    else
    {
      for (k = 0; k < arr[i].size() - 2; k++) // null값 참조를 방지하기 위해 size-2까지 반복
      {
        if (arr[i][k] != arr[i][k + 1]) // 단어의 현재 글자와 다음 글자가 다르면
        {
          for (j = k + 2; j < arr[i].size(); j++) // 그 뒤에 현재 글자와 같은 글자가 있는지 검사
          {
            if (arr[i][k] == arr[i][j]) // 같은 글자가 나오면 그룹 단어가 아닌 것으로 판별
            {
              key = 0; // key = 0으로 그룹 단어가 아니라는 표시를 함
              break;
            }
            else
            {
              if (key == 0) // 그룹 단어가 아닌 걸 검출한 상태에서 key값이 바뀌는 걸 막기 위한 조건문
              {
                continue;
              }
              else
              {
                key = 1; // 위의 검사에서 걸리지 않고 여기까지 내려온 단어는 그룹 단어로 판별
              }
            }
          }
        }
      }

      if (key == 1) // 그룹 단어로 판별된 단어를 카운트
      {
        count++;
      }
    }
  }

  cout << count << endl;
  return;
}

int main()
{
  int num, i;
  cin >> num;
  arr = new string[num]; // 입력받은 단어의 개수만큼 동적 할당

  for (i = 0; i < num; i++)
  {
    cin >> arr[i];
  }

  GroupWord(num);
  delete[] arr;

  return 0;
}