#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
#define mx 110
vector<int>graph[mx];
bool visited[mx];
void dfs(int source)
{
    visited[source]=1;
    for(int i=0; i<graph[source].size(); i++)
    {
        int next=graph[source][i];
        if(!visited[next])
            dfs(next);
    }
}
int main()
{
    fastIo
    freopen("input.txt","r",stdin);

    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0; i<edges; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[v].push_back(u);
        graph[u].push_back(v);
    }
    int source;
    cin>>source;
    dfs(source);
    for(int i=0;i<nodes;i++){
        if(visited[i]==1)
            cout<<"Node "<<i<<" is visited"<<endl;
       else
         cout<<"Node "<<i<<" is not visited"<<endl;

    }


    return 0;
}

