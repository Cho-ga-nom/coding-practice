//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//	int N, rotate;
//	char temp[305];
//	cin >> N >> rotate;
//
//	vector<vector<string>> map(N);
//	for (int i = 0; i <= N; i++) {
//		cin.getline(temp, 305);
//		char* buffer = strtok(temp, " ");
//
//		while (buffer != NULL) {
//			map[i].push_back(buffer);
//			buffer = strtok(NULL, " ");
//		}
//	}
//
//	cout << map[0][0];
//	return 0;
//}