/*
 * 백준 실버4 구현 문제
 * 할아버지는 유명해!
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m, temp, first = 0, second = 0;
	vector<vector<int>> ans;

	while (1)
	{
		cin >> n >> m;
		if (n == 0 && m == 0)
			break;

		int *players = new int[10001]{0};
		for (int i = 0; i < n * m; i++)
		{
			cin >> temp;
			players[temp]++;
		}

		for (int i = 1; i < 10001; i++)
		{
			if (players[i] > 0)
			{
				if (players[i] > first)
				{
					if (first > second)
					{
						second = first;
						first = players[i];
					}
					else
						first = players[i];
				}
				else
				{
					if (players[i] > second)
						second = players[i];
				}
			}
		}

		vector<int> v;
		for (int i = 1; i < 10001; i++)
		{
			if (players[i] == second)
				v.push_back(i);
		}

		ans.push_back(v);
		first = 0, second = 0;
		delete[] players;
	}

	for (int i = 0; i < ans.size(); i++)
	{
		for (int j = 0; j < ans[i].size(); j++)
			cout << ans[i][j] << " ";
		cout << endl;
	}

	return 0;
}