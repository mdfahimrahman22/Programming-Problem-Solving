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

    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        vector<int> differences;
        int dif = 0, minDiff = 0;
        for (int k = 0; k < n; k++)
        {
            for (int i = k + 1; i < n; i++)
            {
                dif = 0;
                for (int j = 0; j < m; j++)
                {
                    dif += abs(s[k][j] - s[i][j]);
                    // cout << abs(s[k][j] - s[i][j]) << endl;
                }
                differences.push_back(dif);
                // cout << "dif=" << dif << endl;
            }
        }
        minDiff=*min_element(differences.begin(),differences.end());
        cout<<minDiff<<endl;
        
    }

    return 0;
}