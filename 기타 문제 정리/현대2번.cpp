//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//// 경로, 최종 보유 금액, 최종 잔여 연료량 출력
//// A부터 N번째 마을까지
//// 초기 100원, 1km당 1리터 연료 사용
//// 각 마을에서는 기름 10리터 충전, 첫 번째 마을에서는 충전x
//// 특산품 판매 300원, 구매 100원
//// 첫 번째 마을에서는 구매만, 목적지 마을에서는 판매만 가능
//// 경로, 최종 보유 금액, 연료량 출력
//// 여러개라면 연료량이 적은 순서로 출력
//// 연료량이 부족하면 -1 출력
//// 보유 금액과 연료량이 동일한 경로가 여러 개라면 -1 출력
//	
//int N, K, route; // 마을 개수, 연료량, 경로
//int money = 100;
//bool visit[26] = { false, };
//
//void Dfs(int start, vector<int>& distance) {
//	if (start == N) {
//		K -= distance[start];
//		money += 300;
//		return;
//	}
//
//	visit[start] = true;
//
//	for (int k = start + 1; k < N; k++) {
//		if (visit[k])
//			continue;
//
//		K -= distance[start];
//		money += 200;
//		Dfs(k, distance);
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//	cin >> N >> K;
//	cin >> route;
//	
//	char temp1, temp2;
//	vector<int> distance(route);
//	for (int i = 0; i < route; i++)
//		cin >> temp1 >> temp2 >> distance[i];
//
//	money -= 100;
//	Dfs(0, distance);
//
//	temp1 = 'A';
//	for (int i = 0; i < 26; i++) {
//		if (visit[i])
//			cout << temp1 - i << " ";
//	}
//	
//	cout << money << " " << K;
//	
//	return 0;
//}