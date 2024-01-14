//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//// ���, ���� ���� �ݾ�, ���� �ܿ� ���ᷮ ���
//// A���� N��° ��������
//// �ʱ� 100��, 1km�� 1���� ���� ���
//// �� ���������� �⸧ 10���� ����, ù ��° ���������� ����x
//// Ư��ǰ �Ǹ� 300��, ���� 100��
//// ù ��° ���������� ���Ÿ�, ������ ���������� �ǸŸ� ����
//// ���, ���� ���� �ݾ�, ���ᷮ ���
//// ��������� ���ᷮ�� ���� ������ ���
//// ���ᷮ�� �����ϸ� -1 ���
//// ���� �ݾװ� ���ᷮ�� ������ ��ΰ� ���� ����� -1 ���
//	
//int N, K, route; // ���� ����, ���ᷮ, ���
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