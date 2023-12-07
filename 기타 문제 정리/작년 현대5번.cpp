//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//#include <string>
//#include <cstring>
//using namespace std;
//
//// 첫번째, 네번째 인자는 네트워크 인터페이스 이름
//// 두번째, 다섯번째 인자는 IPv4 주소값
//// 세번째, 여섯번째 인자는 비트마스크 범위
//// 일곱번째 인자는 어떤 인터페이스에서 어떤 역할인지
//// 주소 범위에 포함되지 않으면 "default, unknown" 출력
//
//string solution(vector<string> &params) {
//	string result;
//	return result;
//}
//
//int main() {
//	char input[100];
//	cin.getline(input, 100);
//
//	char* buffer = strtok(input, ", ");
//	vector<string> params;
//	while (buffer != NULL) {
//		params.push_back(buffer);
//		buffer = strtok(NULL, ", ");
//	}
//
//	for (auto elem : params)
//		cout << elem << "\n";
//	//string answer = solution(params);
//	//cout << answer << endl;
//
//	return 0;
//}