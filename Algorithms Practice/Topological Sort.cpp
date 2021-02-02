#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
#define mx 100
vector<int>graph[mx];
bool visited[mx];
vector<int>result;
void dfs(int node)
{
    visited[node]=1;
    for(int i=0; i<graph[node].size(); i++)
    {
        int next=graph[node][i];
        if(!visited[next])
            dfs(next);
    }
    result.push_back(node);
}
int main()
{
    fastIo
    freopen("input.txt","r",stdin);

    int nodes,edges,u,v;
    cin>>nodes>>edges;
    for(int i=0; i<edges; i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
    }
//    int source,destination;
//    cin>>source>>destination;
    for(int i=1; i<=nodes; i++)
    {
        if(!visited[i])dfs(i);
    }
    reverse(result.begin(),result.end());
    cout<<"Topological order: ";
    for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
    }


    return 0;
}

