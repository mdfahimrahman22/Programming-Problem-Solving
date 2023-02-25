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
    int t, ans;
    bool con1, con2;
    cin >> t;
    int a[6];
    while (t--)
    {
        cin >> a[1] >> a[2] >> a[3] >> a[4];
        con1 = con2 = true;

        for (int i = 2; i <= 4; i++)
        {
            if (a[i] != 0)
            {
                con1 = false;
            }
            if (a[i - 1] != 0)
            {
                con2 = false;
            }
        }
        if (con1 == true)
        {
            cout << a[1] << endl;
            continue;
        }
        if (con2 == true)
        {
            cout << 1 << endl;
            continue;
        }
        ans = a[1];
        int maxVal = max(a[2], a[3]);
        int minVal = min(a[2], a[3]);
        if(maxVal==0 && minVal==0){
            ans = ans * 2 + 1;
        }
        else if (maxVal == 0 || minVal == 0)
        {

            if (ans >= maxVal)
            {
                ans = ans + maxVal;
                if (a[4] > 0)
                    ans++;
            }
            else
            {
                ans = ans * 2;
                if (a[4] > 0)
                    ans++;
            }
        }
        else if (ans <= maxVal)
        {
            ans += minVal;
            ans = ans * 2 + 1;
        }
        else
        {
            ans += minVal;
            ans = (ans - maxVal) + ans + maxVal;
            if (a[4] > 0)
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}