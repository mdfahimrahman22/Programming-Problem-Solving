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

    int t, n, in;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], count = 1;
        cin >> in;
        a[0] = in;

        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            if (a[i - 1] != a[i])
            {
                count++;
                // cout << a[i] << endl;
            }
        }
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }

        cout << count << endl;
    }

    return 0;
}