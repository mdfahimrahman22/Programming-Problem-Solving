#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
#define mx 100
vector<char>graph[mx];
unordered_set<char>uniqueNodes;
bool visited[mx];
vector<char>result;
void dfs(char node)
{
    visited[node-65]=1;
    for(int i=0; i<graph[node-65].size(); i++)
    {
        char next=graph[node-65][i];
        if(!visited[next-65])
            dfs(next);
    }
    result.push_back(node);
}

int main()
{
    fastIo
//    freopen("input.txt","r",stdin);

    int nodes,edges;
    char u,v;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++)
    {
        cin>>u>>v;
        graph[u-65].push_back(v);
        uniqueNodes.insert(u);
        uniqueNodes.insert(v);
    }
//    int source,destination;
//    cin>>source>>destination;
unordered_set<char>::iterator it;
    for(it=uniqueNodes.begin(); it!=uniqueNodes.end(); it++)
    {
        if(!visited[*it-65])dfs(*it);
    }
    reverse(result.begin(),result.end());
    cout<<"Topological order: ";
    for(int i=0;i<result.size();i++){
    cout<<(char)result[i]<<" ";
    }


    return 0;
}
//Input
//8 9
//A B
//A G
//B C
//B G
//D C
//D E
//E F
//C F
//H G
//Output
//Topological order: D E A B C F H G

