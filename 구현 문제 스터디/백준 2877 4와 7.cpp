/*
 * 백준 골드5 구현 문제
 * 4와 7
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(0);
	cin.tie(0);

	int k, num;
	cin >> k;

	vector<int> ans;
	num = k + 1;

	while (num >= 1)
	{
		ans.push_back(num % 2);
		num /= 2;
	}

	reverse(ans.begin(), ans.end());
	for (int i = 1; i < ans.size(); i++)
	{
		if (ans[i] == 0)
			cout << "4";
		else
			cout << "7";
	}

	return 0;
}