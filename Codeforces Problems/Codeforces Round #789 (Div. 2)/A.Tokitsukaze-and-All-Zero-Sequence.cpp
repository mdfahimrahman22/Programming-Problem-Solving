#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    bool same = false;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i != 0 && !same && v[i] == v[i - 1])
            same = true;
    }
    sort(v.begin(), v.end());
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            same = true;
            break;
        }
    }

    int numZero = count(v.begin(), v.end(), 0);
    if (numZero != 0)
    {
        cout << n - numZero << endl;
        return;
    }
    if (same == true)
    {
        cout << n << endl;
        return;
    }
    else
    {
        cout << n + 1 << endl;
        return;
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