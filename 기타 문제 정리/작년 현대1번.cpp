//#include <iostream>
//#include <sstream>
//#include <vector>
//using namespace std;
//
//int main() {
//	vector<int> param = { 1,0,1,1,1,2,1,0,1,1,1,2,1,0,1,1,1,2,1,0,1,1,1,2,1,0,1,1,1,2,1,0,1,1,1,2,1,0,1,1,1,2 };
//	int point = 40;
//	int round = param.size() / 6;
//
//	for (int i = 1; i <= round; i++) {
//		bool isSuccess = false;
//		int start = (i - 1) * 3;
//
//		for (int j = start; j <= start + 4; j += 2) {
//			int x = param[j];
//			int y = param[j + 1];
//
//			switch (i) {
//			case 1:
//				if (x >= 11 && x <= 12 && y >= 2 && y <= 4) {
//					point += 5;
//					isSuccess = true;
//				}
//				else if (x == 13 && y >= 3 && y <= 4) {
//					point += 5;
//					isSuccess = true;
//				}
//
//				break;
//
//			case 2:
//				if (x == 2 && y >= 11 && y <= 12) {
//					point += 6;
//					isSuccess = true;
//				}
//				else if (x >= 3 && x <= 4 && y >= 11 && y <= 13) {
//					point += 6;
//					isSuccess = true;
//				}
//
//				break;
//
//			case 3:
//				if (x == 2 && y >= 3 && y <= 4) {
//					point += 7;
//					isSuccess = true;
//				}
//				else if (x >= 3 && x <= 4 && y >= 2 && y <= 4) {
//					point += 7;
//					isSuccess = true;
//				}
//
//				break;
//
//			case 4:
//				if (x >= 11 && x <= 12 && y >= 11 && y <= 13) {
//					point += 8;
//					isSuccess = true;
//				}
//				else if (x == 13 && y >= 11 && y <= 12) {
//					point += 8;
//					isSuccess = true;
//				}
//
//				break;
//
//			case 5:
//				if (x >= 6 && x <= 9 && y >= 0 && y <= 1) {
//					point += 17;
//					isSuccess = true;
//				}
//				else if (x >= 6 && x <= 9 && y >= 14 && y <= 15) {
//					point += 18;
//					isSuccess = true;
//				}
//
//				break;
//
//			case 6:
//				if (x >= 9 && x <= 13 && y >= 7 && y <= 8) {
//					point += 9;
//					isSuccess = true;
//				}
//				else if (x >= 2 && x <= 6 && y >= 7 && y <= 8) {
//					point += 10;
//					isSuccess = true;
//				}
//
//				break;
//
//			case 7:
//				if (x >= 7 && x <= 8 && y >= 2 && y <= 6) {
//					point += 12;
//					isSuccess = true;
//				}
//				else if (x >= 7 && x <= 8 && y >= 9 && y <= 13) {
//					point += 11;
//					isSuccess = true;
//				}
//
//				break;
//
//			case 8:
//				if (x >= 0 && x <= 1 && y >= 6 && y <= 9) {
//					point += 19;
//					isSuccess = true;
//				}
//				else if (x >= 14 && x <= 15 && y >= 6 && y <= 9) {
//					point += 20;
//					isSuccess = true;
//				}
//
//				break;
//
//			case 9:
//				if (x >= 7 && x <= 8 && y >= 7 && y <= 8) {
//					point += 25;
//					isSuccess = true;
//				}
//			}
//		}
//
//		if (!isSuccess) {
//			if (point == 1 || point == 0) {
//				point = 0;
//			}
//
//			point /= 2;
//		}
//	}
//
//	cout << point;
//
//	return 0;
//}