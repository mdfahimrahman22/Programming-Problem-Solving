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

    int t, r, c, in;
    cin >> t;
    while (t--)
    {
        cin >> r >> c;
        int mat[r + 100][c + 100] = {0};
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> mat[i][j];
            }
        }

        int posDownR, posDownC, posUpR, posUpC;
        long long int sum = 0, maxPoint = -1;
        for (int row = 0; row < r; row++)
        {
            sum = 0;
            for (int col = 0; col < c; col++)
            {
                sum = mat[row][col];

                posDownR = row + 1, posDownC = col + 1;
                posUpR = row - 1, posUpC = col + 1;

                // Right-Down
                while (posDownR < r && posDownC < c)
                    sum += mat[posDownR++][posDownC++];

                // Right-Up
                while (posUpR >= 0 && posUpC < c)
                    sum += mat[posUpR--][posUpC++];

                posDownR = row + 1, posDownC = col - 1;
                posUpR = row - 1, posUpC = col - 1;

                // Left-Down
                while (posDownR < r && posDownC >= 0)
                    sum += mat[posDownR++][posDownC--];

                // Left-Up
                while (posUpR >= 0 && posUpC >= 0)
                    sum += mat[posUpR--][posUpC--];

                if (maxPoint < sum)
                    maxPoint = sum;
            }
        }

        cout << maxPoint << endl;
    }

    return 0;
}