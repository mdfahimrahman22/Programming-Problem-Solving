#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
#define mx 10010
vector<int>graph[mx];
int color[mx];
#define white 0
#define gray 1
#define black 2
bool cycle;
vector<int>result;
void dfs(int node)
{
    color[node]=gray;
    sort(graph[node].begin(),graph[node].end());
    for(int i=graph[node].size()-1; i>=0; i--)
    {
        int next=graph[node][i];
        if(color[next]==white)
        {
            dfs(next);
        }
        else if(color[next]==gray)
        {
            cycle=true;
            return;
        }
    }
    color[node]=black;
    result.push_back(node);

}
int main()
{
    fastIo
//    freopen("input.txt","r",stdin);

    int nodes,edges,u,v;
    cin>>nodes>>edges;
    for(int i=1; i<=edges; i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
    }
    for(int i=nodes; i>=1; i--)
    {
        if(color[i]==white)dfs(i);;
    }
    if(cycle==true)
        cout<<"Sandro fails.\n";
        else
        {
            for(int i=result.size()-1; i>=0; i--)
            {
                if(i==0)
                    cout<<result[i]<<endl;
                else
                    cout<<result[i]<<" ";
            }
        }
    return 0;
}
