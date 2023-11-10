#include <iostream>
using namespace std;

int n, m;
int selected[10];

void Recursive(int k) {
	if (k == m + 1) {
		for (int i = 1; i <= m; i++) {
			cout << selected[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= n; i++) {
		selected[k] = i;
		Recursive(k + 1);
		selected[k] = 0;
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	Recursive(1);

	return 0;
}