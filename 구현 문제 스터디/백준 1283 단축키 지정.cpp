/*
 * 백준 실버2 구현문제
 * 단축키 지정
 */

#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>
using namespace std;

vector<string> ans;
vector<string>::iterator it;
vector<bool> hotkeys(26, false);

void MakeHotkeyFirst(vector<string>);
void MakeHotkeySecond(vector<string>);

void MakeHotkeyFirst(vector<string> option)
{
	int idx;
	bool isDone = false;

	for (int i = 0; i < option.size(); i++)
	{
		idx = tolower(option[i][0]) - 97;

		if (hotkeys[idx])
			continue;

		option[i].insert(0, "[");
		option[i].insert(2, "]");

		string temp;
		for (int j = 0; j < option.size(); j++)
			temp += option[j];

		ans.push_back(temp);
		hotkeys[idx] = true;
		isDone = true;
		break;
	}

	if (!isDone)
		MakeHotkeySecond(option);

	return;
}

void MakeHotkeySecond(vector<string> option)
{
	int idx;
	bool isDone = false;

	for (int i = 0; i < option.size(); i++)
	{
		for (int j = 0; j < option[i].size(); j++)
		{
			idx = tolower(option[i][j]) - 97;

			if (idx < 0)
				continue;
			if (hotkeys[idx])
				continue;

			option[i].insert(j, "[");
			option[i].insert(j + 2, "]");
			isDone = true;
			break;
		}

		if (isDone)
		{
			string temp;
			for (int k = 0; k < option.size(); k++)
				temp += option[k];

			ans.push_back(temp);
			hotkeys[idx] = true;
			return;
		}
	}

	if (!isDone)
	{
		string temp;
		for (int i = 0; i < option.size(); i++)
			temp += option[i];

		ans.push_back(temp);
		return;
	}
}

int main()
{
	int n, start = 0, count = 0;
	bool isSingle = true;
	cin >> n;
	cin.ignore();

	string temp;
	vector<string> option;
	while (n--)
	{
		getline(cin, temp);
		for (int i = 0; temp[i] != '\0'; i++)
		{
			count++;
			if (temp[i] == ' ')
			{
				option.push_back(temp.substr(start, count));
				start = i + 1;
				count = 0;
				isSingle = false;
			}
		}

		if (isSingle)
			option.push_back(temp);
		else
			option.push_back(temp.substr(start, count));

		count = 0, start = 0;
		isSingle = true;
		MakeHotkeyFirst(option);
		vector<string>().swap(option);
	}

	for (it = ans.begin(); it != ans.end(); it++)
		cout << *it << endl;

	return 0;
}