#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
#define max 10000

vector<int> graph[max];
int dist[max];
int visited[max];

void bfs(int source)
{
    queue<int> Q;
    visited[source] = 1;
    dist[source] = 0;
    Q.push(source);

    while (!Q.empty())
    {
        int node = Q.front();
        Q.pop();
        for (int i = 0; i < graph[node].size(); i++)
        {
            int next = graph[node][i];
            if (visited[next] == 0)
            {
                visited[next] = 1;
                dist[next] = dist[node] + 1;
                Q.push(next);
            }
        }
    }
}
int main()
{
    fastIo;
    freopen("input.txt","r",stdin);
    
    int nodes, edges, u, v,source;
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    cin>>source;
    bfs(source);
    cout<<"From node "<<source<<endl;
    for(int i=1;i<=nodes;i++){
        cout<<"Distance of "<<i<<" is : "<<dist[i]<<endl;
    }

    return 0;
}

// input:
// 7 9
// 1 2
// 1 3
// 1 7 
// 2 3
// 3 7
// 2 4
// 4 5
// 3 6
// 5 6
// 1