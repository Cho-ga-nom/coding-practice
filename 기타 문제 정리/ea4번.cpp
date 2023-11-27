//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main() {
//	int answer = 0; 
//	vector<int> bricks = { 0, 2, 0, 1, 3, 1, 2, 0, 1, 0, 2, 0 };
//	int start = 0, end = bricks.size() - 1, left, right, stand;
//
//	for (int i = 0; i < bricks.size(); i++) {
//		if (bricks[i] != 0) {
//			start = i;
//			break;
//		}
//	}
//
//	for (int i = bricks.size() - 1; i >= 0; i--) {
//		if (bricks[i] != 0) {
//			end = i;
//			break;
//		}
//	}
//
//	for (int i = start + 1; i < end; i++) {
//		left = 0; right = 0;
//
//		for (int j = start; j < i; j++) {
//			if (bricks[j] > left)
//				left = bricks[j];
//		}
//
//		for (int j = end; j > i; j--) {
//			if (bricks[j] > right)
//				right = bricks[j];
//		}
//
//		if (left > right)
//			stand = right;
//		else
//			stand = left;
//	
//		if (stand > bricks[i])
//			answer += stand - bricks[i];
//	}
//
//	cout << answer;
//
//	return 0;
//}