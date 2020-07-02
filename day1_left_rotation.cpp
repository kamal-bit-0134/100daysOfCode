/*
question at https://www.hackerrank.com/challenges/array-left-rotation/problem
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
    fast() int n, d;
    cin >> n >> d;
    int array[n];

    REP(i, 0, n - 1)
    cin >>
        array[i];

    //converting to vector
    vi arr(array, array + n);

    //saving starting d values to temp
    vi temp(arr.begin(), arr.begin() + d);

    arr.erase(arr.begin(), arr.begin() + d);

    //joining d values to back of arr
    arr.insert(arr.end(), temp.begin(), temp.end());

    TRvi(arr, it)
            cout
        << *it << " ";
}
