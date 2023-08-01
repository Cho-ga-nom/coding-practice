/*
 * 백준 골드5 구현 문제
 * ZOAC
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string str;
vector<char> v;
vector<char>::iterator it;

void Print(int start, int end)
{
	int minIndex = start;

	for (int i = start; i <= end; i++)
	{
		if (str[i] < str[minIndex])
			minIndex = i;
	}
	v[minIndex] = str[minIndex];

	for (it = v.begin(); it != v.end(); it++)
	{
		if (*it)
			cout << *it;
	}
	cout << endl;

	if (minIndex + 1 <= end)
		Print(minIndex + 1, end);

	if (minIndex - 1 >= start)
		Print(start, minIndex - 1);
}

int main()
{
	cin >> str;
	for (int i = 0; i < str.length(); i++)
		v.push_back(0);
	Print(0, str.length() - 1);

	return 0;
}