#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
typedef unsigned long long int ll;

ll nC2(ll n)
{
    return (n * (n - 1)) / 2;
}
int main()
{
    fastIo;
    // freopen("input.txt", "r", stdin);
    ll t, n;
    cin >> t;
    while (t--)
    {
        ll count = 0;
        cin >> n;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];

        map<ll, ll> freq;
        for (ll i = 0; i < n; i++)
        {
            freq[a[i] ^ b[i]]++;
        }
        for (auto i = freq.begin(); i != freq.end(); i++)
        {
            count+=nC2(i->second);
        }
        
        cout << count << endl;
    }

    return 0;
}