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
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> arr(n + 10);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        int ans = 0;
        int parity1,parity2;
        for (int i = 1; i < n; i++)
        {
            parity1=arr[i-1]%2;
            parity2=arr[i]%2;
            if(parity1==parity2)
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}