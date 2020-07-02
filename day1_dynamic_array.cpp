/*
question at https://www.hackerrank.com/challenges/dynamic-array/problem
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
    cin.tie(NULL);
#define REP(i, a, b) \
    for (int i = int(a); i <= int(b); i++)
#define TRvi(c, it) \
    for (vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
    for (vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
    for (msi::iterator it = (c).begin(); it != (c).end(); it++)

int main()
{
    fast()
        vector<vi>
            seq;
    int n, q;
    int lastAnswer = 0;
    cin >> n >> q;
    seq.resize(n);
    REP(i, 0, q - 1)
    {
        int tag, x, y;
        cin >> tag >> x >> y;

        if (tag == 1)
        {
            seq[(x ^ lastAnswer) % n].push_back(y);
        }
        else
        {
            lastAnswer = seq[(x ^ lastAnswer) % n][y % seq[(x ^ lastAnswer) % n].size()];
            cout << lastAnswer << "\n";
        }
    }
}
