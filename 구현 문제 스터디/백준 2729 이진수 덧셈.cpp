/*
 * 백준 브론즈1 구현 문제
 * 이진수 덧셈
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string a, b;
        cin >> a >> b;

        // 구현의 편의를 위해 항상 a의 길이가 더 길게 한다.
        if (b.size() > a.size())
            swap(a, b);

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        string ans;
        int carry = 0;

        for (int i = 0; i < b.size(); i++)
        {
            int sum = (a[i] - '0') + (b[i] - '0') + carry;
            if (sum > 1)
                carry = 1;
            else
                carry = 0;
            ans.push_back((sum % 2) + '0');
        }

        for (int i = b.size(); i < a.size(); i++)
        {
            int sum = (a[i] - '0') + carry;
            if (sum > 1)
                carry = 1;
            else
                carry = 0;
            ans.push_back((sum % 2) + '0');
        }

        // 모든 연산이 끝나고 carry가 남았을 때
        if (carry)
            ans.push_back('1');
        reverse(ans.begin(), ans.end());

        bool flag = false;
        for (auto &c : ans)
        {
            if (c == '1')
                flag = true;
            if (flag)
                cout << c;
        }

        if (!flag)
            cout << '0';
        cout << endl;
    }
    return 0;
}