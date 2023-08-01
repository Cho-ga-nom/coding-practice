/*
 * 백준 실버5 구현 문제
 * 그룹 단어 체커
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n, i, j, k, lastIndex, count = 0;
	cin >> n;

	vector<string> words(n);
	for (i = 0; i < n; i++)
		cin >> words[i];

	char alphabet;
	bool isContinue;
	for (i = 0; i < n; i++)
	{
		lastIndex = 0;
		isContinue = true;

		for (j = lastIndex; j < words[i].length() - 1; j++)
		{
			if (words[i][j + 1] != words[i][j])
			{
				alphabet = words[i][j];
				lastIndex = j + 1;

				for (k = lastIndex; k < words[i].length(); k++)
				{
					if (words[i][k] == alphabet)
					{
						isContinue = false;
						break;
					}
				}
			}
		}

		if (isContinue)
			count++;
	}

	cout << count;
}