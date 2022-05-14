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

    int t, l1, r1, l2, r2;
    cin >> t;
    while (t--)
    {
        cin >> l1 >> r1 >> l2 >> r2;
        if (r1 >= l2)
        {
            if (l1 > l2 && r2 < l1)
                cout << l1 + l2 << endl;
            else if (l1 > l2 && r2 >= l1)
                cout << l1 << endl;
            else
                cout << l2 << endl;
        }
        else if (l2 > r1)
        {
            cout << l2 + l1 << endl;
        }
    }

    return 0;
}