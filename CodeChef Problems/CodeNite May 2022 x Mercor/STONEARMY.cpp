#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
typedef long long int ll;
class soldier
{
public:
    ll a, b, dif;
    soldier();
    soldier(ll aIn, ll bIn)
    {
        dif = aIn - bIn;
        a = aIn;
        b = bIn;
    }
};
int main()
{
    fastIo;
    // freopen("input.txt", "r", stdin);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        vector<soldier> soldiers;
        for (int i = 0; i < n; i++)
        {
            soldiers.push_back(soldier(a[i], b[i]));
        }
        
        sort(soldiers.begin(), soldiers.end(), [](const auto &lhs, const auto &rhs)
             { return lhs.dif < rhs.dif; });

        long long int res = 0;

        for (int i = 0; i < n; i++)
        {

            ll a = soldiers[i].a, b = soldiers[i].b, dif = soldiers[i].dif;
            // cout<<a<<' '<<b<<' '<<endl;
            int j = i + 1;
            res += ((j * dif) - a + (b * n));
            // res += a * (j - 1) + b * (n - j);
        }

        cout << res << endl;
    }

    return 0;
}