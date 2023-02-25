#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
#define mx 100000
bool visited[mx];
vector<int> result;
void dfs(vector<int> graph[], int node)
{
    visited[node] = true;
    for (int i = 0; i < graph[node].size(); i++)
    {
        int next = graph[node][i];
        if (visited[next] == false)
        {
            dfs(graph, next);
        }   
    }
    result.push_back(node);
}

void topological_sort(vector<int> graph[], int n)
{
    for (int node = 1; node <= n; node++)
    {
        if (visited[node] == false)
            dfs(graph,node);
    }
}
int main()
{
    fastIo;
    freopen("input.txt", "r", stdin);

    int u, v, nodes, edges;
    cin >> nodes >> edges;

    vector<int> graph[nodes + 100];
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
    }
    topological_sort(graph, nodes);

    reverse(result.begin(),result.end());
    cout<<"Topological order:"<<endl;
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

    return 0;
}