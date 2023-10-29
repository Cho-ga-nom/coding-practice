#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void Find(char word[], int size, int idx) {
    if (size <= 2) {
        reverse(word, word + size);
        cout << word << "\n";
        return;
    }

    char key = word[idx];
    int changeWord = 100;
    int select = idx;

    for (int i = idx + 1; i < size; i++) {
        if (word[i] <= key) 
            continue;

        if (word[i] < changeWord) {
            changeWord = word[i];
            select = i;
        }
    }

    word[idx] = word[select];
    word[select] = key;
    sort(word + idx + 1, word + size);

    for (int i = 0; i < size; i++)
        cout << word[i];
    cout << "\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string word;
        cin >> word;

        bool isChange = false;
        int size = word.size();
        char arr[100];

        for (int i = 0; i < size; i++) 
            arr[i] = word[i];

        for (int i = size - 1; i >= 0; i--) {
            if (word[i] < word[i + 1]) {
                isChange = true;
                Find(arr, size, i);
                break;
            }
        }

        if (!isChange) 
            cout << word << "\n";
    }

    return 0;
}