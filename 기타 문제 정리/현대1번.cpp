//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//#include <string>
//#include <cstring>
//using namespace std;
//
//// �� �غ��� �� �� �Ǹ� -1 ���
//// ���� ũ��
//// ���, �繰
//// �踦 �� �� �ִ� ���
//// ���� ������ �� �Ǵ� ���� ����
//// ���� ������ �� �Ǵ� ���ǵ�
//// �迡 �Բ� Ÿ�� �� �Ǵ� ���� ����
//// �迡 �Բ� Ÿ�� �� �Ǵ� ���ǵ�
//
//struct quiz {
//	int boatSize;
//	vector<string> thing;
//	vector<string> boatMan;
//	int landCriNum;
//	vector<string> landCri;
//	int boatCriNum;
//	vector<string> boatCri;
//};
//
//quiz input;
//
//void Input() {
//	cin >> input.boatSize;
//	
//	char temp[500];
//	cin.getline(temp, 500);
//	char* buffer= strtok(temp, " ");
//	while (buffer != NULL) {
//		input.thing.push_back(buffer);
//		buffer = strtok(NULL, " ");
//	}
//
//	cin.getline(temp, 500);
//	buffer = strtok(temp, " ");
//	while (buffer != NULL) {
//		input.boatMan.push_back(buffer);
//		buffer = strtok(NULL, " ");
//	}
//
//	cin >> input.landCriNum;
//	for (int i = 0; i < input.landCriNum; i++) {
//		cin.getline(temp, 500);
//		buffer = strtok(temp, " ");
//
//		while (buffer != NULL) {
//			input.landCri.push_back(buffer);
//			buffer = strtok(NULL, " ");
//		}
//	}
//
//	cin >> input.boatCriNum;
//	for (int i = 0; i < input.boatCriNum; i++) {
//		cin.getline(temp, 500);
//		buffer = strtok(temp, " ");
//
//		while (buffer != NULL) {
//			input.boatCri.push_back(buffer);
//			buffer = strtok(NULL, " ");
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
// 	int answer = 0;
//	Input();
//
//	int boatSize = input.boatSize;
//	for (int i = 1; i < input.thing.size(); i++) {
//		if (boatSize) {
//			if (find(input.boatMan.begin(), input.boatMan.end(), input.thing[i])
//				!= input.boatMan.end()) {
//				boatSize--;
//			}
//		}
//	}
//
//	cout << answer;
//
//	return 0;
//}