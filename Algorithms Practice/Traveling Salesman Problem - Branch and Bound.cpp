#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
#define inf 999999999
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int edges,nodes;
    vector<int>v[nodes];
    cin>>edges>>nodes;
    int A[nodes+10][nodes+10];
    for(int i=0;i<nodes;i++){
        for(int j=0;j<nodes;j++){
            A[i][j]=inf;
        }
    }
    for(int i=0; i<edges; i++)
    {
        int u,v;
        cin>>u>>v;
        cin>>A[u][v];
        v[u].push_back(A[u][v]);
    }

    cout<<A[1][1]<<endl;

    return 0;
}
