#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void orangesRotting(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    vector<int> conOne;
    for (int i = 0; i < n; i++)
    {
        int maxOne = 0, x;
        bool safe = false;
        for (int j = 0; j < m; j++)
        {
            x = grid[i][j];
            safe = (x == 1 && i > 0 && grid[i - 1][j] == 0) && (j > 0 && grid[i][j - 1] == 0) && (j < m - 1 && grid[i][j + 1] == 0) && (i < n - 1 && grid[i + 1][j] == 0);
            if(safe==false){
                cout<<i<<" "<<j<<endl;
                break;
            }
        }
    }
}
int main()
{
    fastIo;
    freopen("input.txt", "r", stdin);

    int n, m, input;
    cin >> n >> m;
    vector<vector<int>> grid(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> input;
            grid[i].push_back(input);
        }
    }

    orangesRotting(grid);

    return 0;
}