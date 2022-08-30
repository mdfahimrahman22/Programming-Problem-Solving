#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
typedef unsigned long long int ull;
using namespace std;
int main()
{
    fastIo;
    // freopen("input.txt", "r", stdin);

    int t;
    cin >> t;
    while (t--)
    {
        ull n;
        cin >> n;
        if (n % 2 != 0 || n < 4)
        {
            cout << -1 << endl;
            continue;
        }

        // finding maximum
        ull maxBusCount = n / 4;

        // Finding minimum
        ull minBusCount = n / 6;
        if (n % 6 != 0)
        {
            minBusCount += 1;
        }

        cout << minBusCount << " " << maxBusCount << endl;
    }

    return 0;
}