/*
* 백준 실버3 구현 문제
* 내 선물을 받아줘2
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, count = 0;
	cin >> n;

	string map;
	cin >> map;

	int len = map.length();
	for (int i = 0; i < len - 1; i++) {
		if (map[i] == 'E' && map[i + 1] == 'W')
			count++;
	}

	cout << count;

	return 0;
}