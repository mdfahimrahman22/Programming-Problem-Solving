#include <bits/stdc++.h>
using namespace std;
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cin.tie(NULL);
#define mx 100010
bool visited[mx];
vector<int> graph[mx];


void dfs(int node)
{
    visited[node] = 1;
    for (int i = 0; i < graph[node].size(); i++)
    {
        int next = graph[node][i];
        if (visited[next] == false)
        {
            dfs(next);
        }
    }
}

int main()
{

    // freopen("input.txt", "r", stdin);
    int n, t, a;
    cin >> n >> t;

    for (int i = 1; i <= n - 1; i++)
    {
        cin >> a;
        graph[i].push_back(i + a);
    }
    dfs(1);

    if(visited[t]==true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}

// input:
// 8 5
// 1 2 1 2 1 1 1
// output:
// NO