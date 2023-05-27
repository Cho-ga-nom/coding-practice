/**
 * 백준 실버 5 문제
 * 정렬 2
 */

#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main()
{
  int num, i, k;
  cin >> num;

  int arr[num];
  i = 0;

  while (i < num)
  {
    cin >> arr[i];
    i++;
  }

  for (i = 0; i < num; i++) // 간단한 버블 정렬
  {
    for (k = i + 1; k < num; k++)
    {
      if (arr[i] > arr[k])
      {
        swap(arr[i], arr[k]);
      }
    }
  }

  for (i = 0; i < num; i++)
  {
    cout << arr[i] << endl;
  }

  return 0;
}