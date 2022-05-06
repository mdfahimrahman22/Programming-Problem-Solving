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

    int t, a, b, c, x, y;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> x >> y;
        int moreNeed = 0;
        moreNeed += (a < x) ? x - a : moreNeed;
        moreNeed += (b < y) ? y - b : 0;
        //        cout<<c<<" "<<x<<" "<<a<<" "<<y<<" "<<b<<" "<<moreNeed<<endl;
        if (c >= moreNeed)
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
