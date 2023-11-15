#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Search(vector<int> b, int left, int right, int value) {
	int result = 0;

	while (left <= right) {
		int mid = (left + right) / 2;
		
		if (b[mid] < value) {
			result = mid + 1;
			left = mid + 1;
		}
		else
			right = mid - 1;
	}

	return result;
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int T, aNum, bNum;
	cin >> T;

	while (T--) {
		cin >> aNum >> bNum;
		vector<int> a(aNum), b(bNum);

		for (int i = 0; i < a.size(); i++) cin >> a[i];
		for (int i = 0; i < b.size(); i++) cin >> b[i];
		sort(b.begin(), b.end());

		int count = 0;
		for (int i = 0; i < a.size(); i++) {
			count += Search(b, 0, b.size() - 1, a[i]);
		}

		cout << count << "\n";
	}

	return 0;
}