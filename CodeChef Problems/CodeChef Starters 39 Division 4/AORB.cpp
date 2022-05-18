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
    int t, x, y;
    cin >> t;
    while (t--)
    {
        int firstA,firstB;
        cin >> x >> y;
        firstA=500-x*2+1000-(x+y)*4;
        firstB=1000-y*4+500-(x+y)*2;
        cout<<max(firstA,firstB)<<endl;
    }

    return 0;
}