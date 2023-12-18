#include <iostream>
#include <vector>
#include <string>
using namespace std;
// begin에서 target으로 가장 짧은 변환 과정
// 변환할 수 없을 때는 0 리턴

int answer = 50;
bool visit[51] = { false, };

bool Check(string a, string b) {
    int diffCount = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            diffCount++;
    }

    if (diffCount == 1)
        return true;

    return false;
}

void Dfs(int idx, int count, string target, vector<string>& words) {
    if (count >= answer) return;

    if (words[idx] == target) {
        answer = min(answer, count);
        return;
    }

    visit[idx] = true;
    for (int i = 0; i < words.size(); i++) {
        if (!visit[i] && Check(words[idx], words[i])) {
            Dfs(i, count + 1, target, words);
            visit[i] = false;
        }
    }
}

int main() {
    string begin = "hit";
    string target = "cog";
    vector<string> words = { "hot", "dot", "dog", "lot", "log", "cog" };

    bool isPossible = false;
    for (int i = 0; i < words.size(); i++) {
        if (words[i] == target)
            isPossible = true;
    }

    if (!isPossible)
        return 0;

    for (int i = 0; i < words.size(); i++) {
        if (Check(begin, words[i]))
            Dfs(i, 1, target, words);
    }

    cout << answer;

    return 0;
}
