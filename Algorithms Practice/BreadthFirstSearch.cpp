#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
#define mx 110
vector<int> graph[mx];

bool vis[mx];
int dist[mx];

void bfs(int source){
    queue<int> q;
    vis[source]=1;
    dist[source]=0;
    q.push(source);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(int i=0;i<graph[node].size();i++){
            int next=graph[node][i];
            if(vis[next]==0){
                vis[next]=1;
                dist[next]=dist[node]+1;
                q.push(next);
            }
        }
    }
}

int main()
{
    fastIo
    freopen("input.txt","r",stdin);
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=1;i<=edges;i++){
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int source;
    cin>>source;
    bfs(source);
    cout<<"From node "<<source<<endl;
    for(int i=1;i<=nodes;i++){
        cout<<"Distance of "<< i <<" is "<<dist[i]<<endl;
    }



    return 0;
}
