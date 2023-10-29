/*
 * 백준 실버1 구현 문제
 * 완전 이진 트리
 */

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int buildingNum[1024];
vector<int> tree[10];

void MakeTree(int depth, int start, int end)
{
	if (start >= end)
		return;

	int mid = (start + end) / 2;
	tree[depth].push_back(buildingNum[mid]);
	MakeTree(depth + 1, start, mid);
	MakeTree(depth + 1, mid + 1, end);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k;
	cin >> k;

	int len = pow(2, k) - 1;
	for (int i = 0; i < len; i++)
		cin >> buildingNum[i];

	MakeTree(0, 0, len);

	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < tree[i].size(); j++)
		{
			cout << tree[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}