/*
* 음수와 양수로 이루어진 값이 입력되었을 때
* 음수는 앞에 양수는 뒤로 가게 정렬한다
* 단, 음수와 양수의 순서는 변하지 않아야 한다
* 0은 입력되지 않는다
*/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	int n;
	cin >> n;
	vector<int> vec(n), minusNum, plusNum;

	for (int i = 0; i < n; i++) {
		cin >> vec[i];

		if (vec[i] < 0)
			minusNum.push_back(vec[i]);
		else
			plusNum.push_back(vec[i]);
	}

	for (int i = 0; i < minusNum.size(); i++)
		cout << minusNum[i] << " ";

	for (int i = 0; i < plusNum.size(); i++)
		cout << plusNum[i] << " ";
}