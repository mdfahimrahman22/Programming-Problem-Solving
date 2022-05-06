#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solve()
{
    string s, rev_s;
    cin >> s;
    rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    int n = s.size();
    if (s.size() == 1)
    {
        cout << 1 << endl;
        return;
    }
    int posFirst0 = s.find("0") + 1;
    int posLast1 = n - rev_s.find("1");
    if (posFirst0 == 0 && posLast1 == n + 1)
    {
        cout << n << endl;
        return;
    }
    else if (posLast1 == n + 1)
    {
        cout << posFirst0 << endl;
        return;
    }
    else if (posFirst0 == 0)
    {
        cout << n-posLast1+1 << endl;
        return;
    }
    else
    {
        int dif = posFirst0 - posLast1 + 1;
        cout << dif << endl;
    }
}
int main()
{
    fastIo;
    // freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}