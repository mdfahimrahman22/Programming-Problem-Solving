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
    int t, n, s, r;
    cin >> t;
    while (t--)
    {
        cin >> n >> s >> r;
        int a[n + 10];
        int maxVal = s - r;
        a[0] = maxVal;
        for (int i = 1; i < n; i++)
            a[i] = 1;
        int i = 1;
        r = r - (n - 1);
        int h=maxVal;
        while (i < n && r >= (h-1))
        {
            // cout<<"r="<<r<<endl;
            a[i++] = h;
            r -= (h-1);   
        }
        // cout<<"r="<<r<<endl;
        if (i < n)
        {
            a[i] = a[i] + r;
        }
        // int sum=0;
        for (int i = 0; i < n; i++)
        {
            // sum+=a[i];
            if (i == n - 1)
                cout << a[i];
            else
                cout << a[i] << ' ';
        }
        
        cout << endl;
        // cout<<sum<<endl;
    }

    return 0;
}