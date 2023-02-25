#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
#define mx 1000000
vector<int> graph[mx];
bool visited[mx];
int dist[mx];

void bfs(vector<int> sources){
    queue<int> Q;
    for(int i=0;i<sources.size();i++){
        visited[sources[i]]=true;
        dist[sources[i]]=0;
        Q.push(sources[i]);
    }

    while(!Q.empty()){
        int node=Q.front();
        Q.pop();

        for(int i=0;i<graph[node].size();i++){
            int next=graph[node][i];
            if(visited[next]==false){
                visited[next]=true;
                dist[next]=dist[node]+1;
                Q.push(next);
            }
        }
    }
}

int main()
{
    fastIo;
    freopen("input.txt","r",stdin);
    
    int nodes,edges,numOfSources,u,v,source;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    cin>>numOfSources;
    vector<int> sources;
    for(int i=0;i<numOfSources;i++){
        cin>>source;
        sources.push_back(source);
    }

    bfs(sources);

    for(int i=1;i<=nodes;i++){
        if(dist[i]==0)continue;
        cout<<"Distance of "<<i<<" is : "<<dist[i]<<endl;
    }



    return 0;
}


// input:
// 10 13
// 1 2
// 1 3
// 2 4
// 3 4
// 1 5
// 3 6
// 5 6
// 6 7
// 5 10
// 6 10
// 10 9
// 7 9
// 9 8
// 3
// 1 7 10
