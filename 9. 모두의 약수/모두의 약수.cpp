/*
* 자연수 N이 입력되면 1부터 N까지 각 숫자들의
* 약수의 개수를 출력하는 프로그램
* 에라토스테네스의 체
*/

#include <iostream>
using namespace std;
int cnt[50001];

void main() {
	int num;
	cin >> num;
	
	for (int i = 1; i <= num; i++) {
		for (int j = i; j <= num; j += i)
			cnt[j]++;
	}

	for (int i = 1; i <= num; i++)
		cout << cnt[i] << " ";
}