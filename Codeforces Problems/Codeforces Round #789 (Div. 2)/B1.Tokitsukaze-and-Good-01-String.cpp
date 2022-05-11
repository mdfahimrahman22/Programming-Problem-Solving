#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int numOp = 0;
    int last1 = 0, last0 = 0;
    if (s[0] == '1')
        last1++;
    else
        last0++;

    for (int i = 1; i < n; i++)
    {
        if (last1 % 2 != 0)
        {
            if (s[i] != '1')
            {
                s[i] = '1';
                numOp++;
            }
        }
        if (last0 % 2 != 0)
        {
            if (s[i] != '0')
            {
                s[i] = '0';
                numOp++;
            }
        }
        if (s[i] == '1')
            last1++;
        else
            last0++;
    }
    cout<<numOp<<endl;
    cout<<s<<endl;
}
int main()
{
    fastIo;
    freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}