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
    int t, n, x, y;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> y;
        vector<int> v(n);
        int withCoupon = 0, withoutCoupon = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            withoutCoupon += v[i];
            if (v[i] > y)
            {
                withCoupon += (v[i] - y);
            }
        }
        
        if (withCoupon + x < withoutCoupon)
        {
            cout << "COUPON" << endl;
        }
        else
        {
            cout << "NO COUPON" << endl;
        }
    }

    return 0;
}