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

    int t, r, c;
    cin >> t;
    while (t--)
    {
        cin >> r >> c;
        char a[r][c];
        int robotFoundInRow = -1, robotFoundInCol = -1;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'R' && robotFoundInRow == -1)
                {
                    robotFoundInRow = i;
                }
            }
        }

        for (int i = 0; i < c; i++)
        {
            if(robotFoundInCol!=-1)break;
            for (int j = 0; j < r; j++)
            {
                // cout << "i=" << i << " j=" << j << endl;
                // cout << a[j][i] << " ";
                if (a[j][i] == 'R')
                {
                    robotFoundInCol = i;
                    break;
                }
            }
        }
        if(a[robotFoundInRow][robotFoundInCol]=='R'){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}