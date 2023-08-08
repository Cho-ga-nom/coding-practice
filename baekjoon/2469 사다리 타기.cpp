/*
* 백준 골드5 구현 문제
* 사다리 타기
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int offset[26];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int k, n, hidden;
	cin >> k >> n;

	string alphabet, result;
	cin >> result;

	for (int i = 0; i < result.size(); i++) {
		char temp = 'A' + i;
		alphabet.push_back(temp);
	}

	vector<string> ladder(n);
	for (int i = 0; i < n; i++) {
		cin >> ladder[i];

		if (ladder[i][0] == '?')
			hidden = i;
	}

	for (int i = 0; i < hidden; i++) {
		for (int j = 0; j < k - 1; j++) {
			if (ladder[i][j] == '-')
				swap(alphabet[j], alphabet[j + 1]);
		}
	}

	for (int i = n - 1; i > hidden; i--) {
		for (int j = 0; j < k - 1; j++) {
			if (ladder[i][j] == '-')
				swap(result[j], result[j + 1]);
		}
	}

	vector<char> ans;
	for (int i = 0; i < k - 1; i++) {
		if (alphabet[i] == result[i]) 
			ans.push_back('*');
		else if (alphabet[i] == result[i + 1] && alphabet[i + 1] == result[i]) {
			swap(alphabet[i], alphabet[i + 1]);
			ans.push_back('-');
		}
	}

	if (ans.size() == k - 1) {
		for (int i = 0; i < ans.size(); i++)
			cout << ans[i];
	}
	else {
		ans.clear();
		for (int i = 0; i < k - 1; i++) {
			ans.push_back('x');
			cout << ans[i];
		}
	}

	return 0;
}