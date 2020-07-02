/*
question at https://www.hackerrank.com/challenges/sparse-arrays/problem
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define REP(i, a, b) \
    for (int i = int(a); i <= int(b); i++)

int main()
{
    fast();
    unordered_map<string, int> str;
    int n;
    cin >> n;
    string s;
    REP(i, 0, n - 1)
    {
        cin >> s;
        if (str.find(s) == str.end())
        {
            str[s] = 1;
        }
        else
        {
            str[s] += 1;
        }
    }

    int q;
    cin >> q;
    string queries;
    REP(i, 0, q - 1)
    {
        cin >> queries;
        if (str[queries] > 0)
        {
            cout << str[queries] << "\n";
        }
        else
        {
            cout << 0 << "\n";
        }
    }
}
