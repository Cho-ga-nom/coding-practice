/*
* Least Recently Used(īī�� ĳ�� ���� ����)
* ĳ�� ũ�Ⱑ �־�����, ĳ�ð� ����ִ� ���¿���
* N���� �۾��� ���ʷ� ó���Ѵ� ���� ��
* �۾� �� ĳ�ø޸� ���¸� ���� �ֱ� ���� �۾����� ���ʴ�� ���
* 
* Cache Miss, Cache Hit�� ���� �۾� ������ �ٲ��
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