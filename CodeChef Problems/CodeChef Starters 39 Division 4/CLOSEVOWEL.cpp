#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define mod 1000000007
using namespace std;

int main()
{
    fastIo;
    // freopen("input.txt", "r", stdin);
    int t;
    long long int res = 1;

    char ch;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        res = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> ch;
            if (ch == 'c' || ch == 'g' || ch == 'l' || ch == 'r')
            {
                res = (res * 2) % mod;
            }
        }
        cout << res % mod << endl;
    }

    return 0;
}