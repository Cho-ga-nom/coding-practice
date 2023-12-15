//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//string Calc(vector<pair<int, int>>& num, int count, int N) {
//	vector<int> result;
//	for (auto elem : num)
//		result.push_back(elem.second);
//
//	while (count--) {
//		if (result[N - 1] + 1 > num[N - 1].first) {
//			if (N == 1)
//				result[N - 1] = 0;
//			else {
//				result[N - 1] = 0;
//				result[N - 2] += 1;
//
//				for (int i = N - 2; i >= 0; i--) {
//					if (result[i] > num[i].first) {
//						result[i] = 0;
//						result[i - 1] += 1;
//					}
//					else
//						break;
//				}
//			}
//		}
//		else
//			result[N - 1] += 1;
//	}
//
//	string answer = "";
//	for (auto elem : result)
//		answer += to_string(elem);
//
//	return answer;
//}
//
//int main() {
//	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//	int N, count;
//	cin >> N;
//
//	vector<pair<int, int>> num(N);
//	bool isCorrect = true;
//	for (int i = 0; i < N; i++) // 최댓값
//		cin >> num[i].first;
//	for (int i = 0; i < N; i++) {  // 초기값
//		cin >> num[i].second;
//		if (num[i].second > num[i].first)
//			isCorrect = false;
//	}
//
//	cin >> count;
//	if (!isCorrect) {
//		cout << "-1";
//		return 0;
//	}
//
//	string answer = Calc(num, count, N);
//	cout << answer;
//
//	return 0;
//}