/**
 * 백준 실버 3 문제
 * 통계학
 */

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int avg(int num, int *arr)
{
  int i = 0;
  float sum = 0;

  while (i < num)
  {
    sum += arr[i];
    i++;
  }

  return round(sum / num);
}

int mid(int num, int *arr)
{
  int index = (num / 2);
  sort(arr, arr + num);

  return arr[index];
}

int mode(int num, int *arr)
{
  int *most = new int[num]{};
  int i, k;

  for (i = 0; i < num; i++)
  {
    for (k = 0; k < num; k++)
    {
      if (arr[i] == arr[k])
      {
        most[i]++;
      }
    }
  }

  sort(most, most + num);

  delete[] most;
}

int diff(int num, int *arr)
{
  return arr[num - 1] - arr[0];
}

int main()
{
  int num, i;
  int *arr;

  cin >> num;
  arr = new int[num];

  for (i = 0; i < num; i++)
  {
    cin >> arr[i];
  }

  delete[] arr;
  return 0;
}