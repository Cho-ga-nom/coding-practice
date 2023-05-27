/**
 * 백준 실버 4 문제
 * 크로아티아 알파벳
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
  int i;
  int count = 0;
  string plainText;

  cin >> plainText;

  for (i = 0; i < plainText.length(); i++) // 문자열 길이만큼 반복
  {
    /**
     * 처음에 switch문으로 처리하려고 해서
     * 길이 3짜리 'dz='가 있는 'd'만 따로 분기해주었음
     */
    if (plainText[i] == 'd')
    {
      if (plainText.substr(i, 2) == "d-") // substr()로 잘라서 크로아티아 알파벳을 발견하면
      {
        i++;      // 다음 문자를 건너뛰도록 i++
        count++;  // 카운트 올려줌
        continue; // for문 맨 밑에 있는 count++에 안 걸리도록 continue로 건너뛰기
      }
      else if (plainText.substr(i, 3) == "dz=")
      {
        i += 2; // 문자 길이가 3이라서 2를 증가시켜서 건너뜀
        count++;
        continue;
      }
    }
    else if (plainText[i] == 'c' || plainText[i] == 'l' || plainText[i] == 'n' || plainText[i] == 's' || plainText[i] == 'z') // 위 코드와 마찬가지
    {
      if (plainText.substr(i, 2) == "c=")
      {
        i++;
        count++;
        continue;
      }
      else if (plainText.substr(i, 2) == "c-")
      {
        i++;
        count++;
        continue;
      }
      else if (plainText.substr(i, 2) == "lj")
      {
        i++;
        count++;
        continue;
      }
      else if (plainText.substr(i, 2) == "nj")
      {
        i++;
        count++;
        continue;
      }
      else if (plainText.substr(i, 2) == "s=")
      {
        i++;
        count++;
        continue;
      }
      else if (plainText.substr(i, 2) == "z=")
      {
        i++;
        count++;
        continue;
      }
    }

    count++; // 검사할 필요가 없는 알파벳 count++;
  }

  cout << count << endl;
  return 0;
}