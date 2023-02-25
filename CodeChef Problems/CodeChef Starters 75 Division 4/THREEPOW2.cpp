#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

int main()
{
    fastIo;
    // freopen("input.txt", "r", stdin);
    int t, n, count = 0;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
        }
        if (s == "01" || s == "10")
        {
            cout << "NO" << endl;
            continue;
        }

        if (count <= 3 && n >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}