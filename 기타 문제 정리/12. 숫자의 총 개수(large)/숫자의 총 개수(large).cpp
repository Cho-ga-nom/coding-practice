/*
* 자연수 N이 입력되었을 때
* 1부터 N까지 몇 개의 숫자가 쓰였는지 알아내기
*/

#include <iostream>
using namespace std;

void main() {
	int num;
	cin >> num;
	int sum = 0, count = 1, digit = 9, result = 0;

	while (sum + digit < num) {        
		sum += digit;                  // 9씩 증가
		result += count * digit;       // 1부터 9까지 1의 자리 숫자 개수를 더함
		count++;                       // 각 자릿수에서 쓰이는 숫자 개수. 두자릿수에서는 한 수를 나타내는 데 두 개의 수가 사용됨
		digit *= 10;                   // 자릿수 증가
	}

	// 입력받은 수에서 각 자릿수까지 숫자를 빼고
	// 각 자릿수에서 한 숫자를 표현하는 데 나타내는 수만큼 곱함
	// 그걸 result에 더해서 각 자릿수에 도달하기까지 사용된 수의 개수에
	// 입력 받은 숫자까지 사용된 수의 개수를 구함
	result += (num - sum) * count;
	cout << result;
}