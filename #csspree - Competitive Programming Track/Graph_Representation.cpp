#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

void printVector(vector<int> graph[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<i<<" -> ";
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    fastIo;
    freopen("input.txt","r",stdin);

    int edges, nodes;
    int u, v;
    cin >> nodes >> edges;
    vector<int> graph[nodes];
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    printVector(graph,nodes);


    return 0;
}

// input:
// 5 4
// 0 1
// 1 2
// 1 3
// 3 4
