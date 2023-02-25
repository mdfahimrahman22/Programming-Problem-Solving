#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define mx 205
char input[mx][mx];
bool visited[mx][mx];
int Jane[mx][mx];
int Fire[mx][mx];

int R, C;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
using namespace std;
struct Cell
{
    int x;
    int y;
};

bool valid(int x, int y)
{
    return x >= 1 && x <= R && y >= 1 && y <= C && input[x][y] != '#' && visited[x][y] == 0;
}

bool escape(int x, int y)
{
    return x < 1 || x > R || y < 1 || y > C;
}

void reset()
{
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            Jane[i][j] = INT_MAX;
            Fire[i][j] = INT_MAX;
        }
    }
}

void resetVisited()
{
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            visited[i][j] = 0;
        }
    }
}
void FireMultiSourceBFS(vector<Cell> fires){
    resetVisited();

    queue<Cell> q;
    for (auto fire: fires){
        q.push(fire);
        visited[fire.x][fire.y] = 1;
        Fire[fire.x][fire.y] = 0;
    }

    while(!q.empty()){
        Cell current = q.front();
        q.pop();

        for (int i = 0; i < 4; i++){
            int next_x = current.x + dx[i];
            int next_y = current.y + dy[i];

            if (valid(next_x, next_y)){
                Fire[next_x][next_y] = Fire[current.x][current.y] + 1;
                visited[next_x][next_y] = 1;
                q.push({next_x, next_y});
            }
        }
    }
}

int JaneBFS(Cell jane){
    resetVisited();

    queue<Cell> q;

    q.push(jane);
    visited[jane.x][jane.y] = 1;
    Jane[jane.x][jane.y] = 0;

    while(!q.empty()){
        Cell current = q.front();
        q.pop();

        for (int i = 0; i < 4; i++){
            int next_x = current.x + dx[i];
            int next_y = current.y + dy[i];

            if (escape(next_x, next_y)){
                return Jane[current.x][current.y] + 1;
            }

            if (valid(next_x, next_y)){
                if (Fire[next_x][next_y] > Jane[current.x][current.y] + 1){
                    Jane[next_x][next_y] = Jane[current.x][current.y] + 1;
                    visited[next_x][next_y] = 1;
                    q.push({next_x, next_y});
                }
            }
        }
    }
    return -1;
}

int main()
{
    fastIo;

    // freopen("input.txt", "r", stdin);

    int test;
    cin >> test;
    for (int cs = 1; cs <= test; cs++)
    {
        cin >> R >> C;

        reset();

        vector<Cell> fires;
        Cell jane;

        for (int i = 1; i <= R; i++)
        {
            for (int j = 1; j <= C; j++)
            {
                cin >> input[i][j];

                if (input[i][j] == 'F')
                {
                    fires.push_back({i, j});
                }
                else if (input[i][j] == 'J')
                {
                    jane = {i, j};
                }
            }
        }

        FireMultiSourceBFS(fires);
        int ans = JaneBFS(jane);

        cout << "Case " << cs << ": ";
        if (ans == -1)
            cout << "IMPOSSIBLE\n";
        else
            cout << ans << "\n";
    }

    return 0;
}