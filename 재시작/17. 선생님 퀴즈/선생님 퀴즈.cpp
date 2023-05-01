/*
* n명의 학생에게 각각 숫자가 부여
* 학생들은 1부터 본인이 부여 받은 숫자까지의 합을 구함
* 학생들이 계산한 결과가 맞는지 판별
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int stdNum;
	cin >> stdNum;

	int n;
	vector<int> ans(stdNum), temp(stdNum);

	for (int i = 0; i < stdNum; i++) {
		cin >> n >> ans[i];              // 각 학생의 답을 입력 받음

		for (int k = 1; k <= n; k++)      // 1부터 학생이 부여받은 숫자까지의 합을 구해서 저장
			temp[i] += k;
	}

	for (int i = 0; i < stdNum; i++) {
		if (temp[i] == ans[i])          // 두 값이 같은지 비교
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}