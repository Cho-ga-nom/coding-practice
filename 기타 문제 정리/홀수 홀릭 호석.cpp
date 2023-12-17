//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int N, minAnswer = 1000000000, maxAnswer = 0;
//
//int GetOddCount(int num) {
//	int result = 0;
//	while (num > 0) {
//		int digit = num % 10;
//		if (digit % 2 == 1)
//			result++;
//
//		num /= 10;
//	}
//
//	return result;
//}
//
//void Recursive(int num, int oddCount) {
//	if (num < 10) {
//		minAnswer = min(minAnswer, oddCount);
//		maxAnswer= max(maxAnswer, oddCount);
//
//		return;
//	}
//
//	if (num < 100) {
//		int nextNum = (num / 10) + (num % 10);
//		Recursive(nextNum, GetOddCount(nextNum) + oddCount);
//
//		return;
//	}
//
//	string str = to_string(num);
//	for (int i = 0; i <= str.length() - 3; i++) {
//		for (int j = i + 1; j <= str.length() - 2; j++) {
//			string num1 = str.substr(0, i + 1);
//			string num2 = str.substr(i + 1, j - i);
//			string num3 = str.substr(j + 1, str.length() - j - 1);
//
//			int nextNum = stoi(num1) + stoi(num2) + stoi(num3);
//			Recursive(nextNum, GetOddCount(nextNum) + oddCount);
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//	cin >> N;
//	Recursive(N, GetOddCount(N));
//	cout << minAnswer << " " << maxAnswer;
//
//	return 0;
//}