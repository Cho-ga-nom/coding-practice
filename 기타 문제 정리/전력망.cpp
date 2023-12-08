//#include <string>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int gap(vector<vector<int>> v)
//{
//    vector<int> visit(v.size());
//    queue<int> q;
//
//    q.push(1);
//    int cnt = 0;
//    while (!q.empty())
//    {
//        int cur = q.front();
//        q.pop();
//
//        if (visit[cur] == 1) 
//            continue;
//
//        visit[cur] = 1;
//        cnt++; // 이어진 송전탑 개수
//
//        for (int i = 0; i < v[cur].size(); i++)
//            q.push(v[cur][i]);
//    }
//
//    int cnt2 = v.size() - 1 - cnt;
//
//    return abs(cnt2 - cnt);
//}
//
//int solution(int n, vector<vector<int>> wires) {
//    int answer = 1000;
//
//    for (int i = 0; i < wires.size(); i++)
//    {
//        vector<vector<int>> v(n + 1);
//        for (int j = 0; j < wires.size(); j++)
//        {
//            if (i == j) 
//                continue;
//
//            v[wires[j][0]].push_back(wires[j][1]);
//            v[wires[j][1]].push_back(wires[j][0]);
//        }
//
//        answer = min(answer, gap(v));
//        v.clear();
//    }
//
//    return answer;
//}