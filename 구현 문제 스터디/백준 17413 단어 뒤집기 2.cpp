/*
 * 백준 실버3 구현 문제
 * 단어 뒤집기 2
 */

#include <iostream>
#include <string>
using namespace std;

string s;

void Reverse(int start, int end)
{
	for (int i = end; i >= start; i--) // 역순 출력
		cout << s[i];
}

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);

	getline(cin, s);		// 공백 포함 입력
	bool isTag = false; // 태그인지 판별

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '<')
			isTag = true;
		else if (s[i] == '>')
		{
			isTag = false;
			cout << ">";
			continue;
		}

		if (isTag || s[i] == ' ') // 태그이거나 공백이면 그대로 출력
			cout << s[i];
		else
		{
			for (int j = i; j < s.length(); j++)
			{
				if (j == s.length() - 1)
				{
					Reverse(i, j);
					i = j;
				}

				if (s[j] == ' ' || s[j] == '<')
				{ // 공백이나 태그를 만날 때까지 단어 길이 계산
					Reverse(i, j - 1);
					i = j - 1;
					break;
				}
			}
		}
	}
}