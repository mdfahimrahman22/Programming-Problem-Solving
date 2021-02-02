#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
#define mx 100010
vector<int>graph[mx];
bool visited[mx];
void dfs(int node)
{
    visited[node]=1;
    for(int i=0; i<graph[node].size(); i++)
    {
        int next=graph[node][i];
        if(visited[next]==0)
            dfs(next);
    }

}
int main()
{
    fastIo
//    freopen("input.txt","r",stdin);

    int a,n,t;
    cin>>n>>t;
    for(int i=1; i<n; i++)
    {
        cin>>a;
        graph[i].push_back(a+i);
    }
    dfs(1);
    if(visited[t]==1)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }



    return 0;
}

