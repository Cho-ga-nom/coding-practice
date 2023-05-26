/*
* Least Recently Used(카카오 캐시 문제 변형)
* 캐시 크기가 주어지고, 캐시가 비어있는 상태에서
* N개의 작업을 차례로 처리한다 했을 때
* 작업 후 캐시메모리 상태를 가장 최근 사용된 작업부터 차례대로 출력
* 
* Cache Miss, Cache Hit에 따라 작업 순서가 바뀐다
*/

#include <iostream>
#include <list>
using namespace std;

list<int> cache;
list<int>::iterator it;

int CacheHit(int data) {
	for (it = cache.begin(); it != cache.end(); it++) {
		if (*it == data) {
			cache.erase(it);
			cache.push_front(data);
			return 1;
		}
	}

	return 0;
}

void CacheMiss(int data, int size) {
	if (cache.size() == size) {
		cache.pop_back();
		cache.push_front(data);
	}
	else {
		cache.push_front(data);
	}
}

void PrintList() {
	for (it = cache.begin(); it != cache.end(); it++)
		cout << *it << " ";
}

void main() {
	int s, n, temp;
	cin >> s >> n;
	cin >> temp;
	cache.push_back(temp);

	for (int i = 1; i < n; i++) {
		cin >> temp;

		if (!CacheHit(temp))
			CacheMiss(temp, s);
	}

	PrintList();
}