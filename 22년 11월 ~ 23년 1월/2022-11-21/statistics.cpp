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
  double sum = 0;

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
  int ar[8001] = {0};
  int i, idx, max = 0, cnt = 0;

  for (i = 0; i < num; i++)
  {
    idx = arr[i] + 4000;
    ar[idx] += 1;

    if (ar[idx] > max)
      max = ar[idx];
  }

  for (i = 0, idx = 0; i < 8001; i++)
  {
    if (ar[i] == 0)
      continue;

    if (ar[i] == max)
    {
      if (cnt == 0)
      {
        idx = i;
        cnt += 1;
      }
      else if (cnt == 1)
      {
        idx = i;
        break;
      }
    }
  }

  return idx - 4000;
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

  cout << avg(num, arr) << endl;
  cout << mid(num, arr) << endl;
  cout << mode(num, arr) << endl;
  cout << diff(num, arr) << endl;

  delete[] arr;
  return 0;
}