//#include <vector>
//#include <math.h>
//#include <iostream>
//using namespace std;
//
//double Distance(double x, double y) {
//	double distance = sqrt(pow(x, 2) + pow(y, 2));
//	return distance;
//}
//
//double VectorSize(pair<int, int> v) {
//	return sqrt(pow(v.first, 2) + pow(v.second, 2));
//}
//
//double Inner(pair<int, int> v1, pair<int, int> v2) {
//	return (v1.first * v2.first) + (v1.second * v2.second);
//}
//
//int main() {
//	int r = 2, d = 60;
//	vector<vector<int>> enemies = { {1, 1}, {0, 1}, {2, -1}, {-1, 1} };
//	vector<pair<int, int>> target;
//
//	for (int i = 0; i < enemies.size(); i++) {
//		if (Distance(enemies[i][0], enemies[i][1] <= r))
//			target.push_back(make_pair(enemies[i][0], enemies[i][1]));
//	}
//
//	int answer = 0;
//	double u, v, inner, degree;
//
//	for (int i = 0; i < target.size(); i++) {
//		u = VectorSize(make_pair(2, -1));
//		v = VectorSize(target[i]);
//
//		inner = Inner(make_pair(2, -1), target[i]);
//		degree = acos(inner / (u * v));
//
//		if (degree <= d)
//			answer++;
//	}
//
//	cout << answer;
//
//	return 0;
//}