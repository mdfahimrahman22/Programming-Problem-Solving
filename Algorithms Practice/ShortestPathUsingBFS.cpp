#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
#define mx 100
int graph[mx][mx];
int take_input(int nodes,int edges,int choice)
{
    int src,destination,weight=0;
    cout<<"Enter weight(if needed) then"
        " source destination:"<<endl;
    switch(choice)
    {
    case 1:
        for(int i=1; i<=edges; i++)
        {
            cin>>src>>destination;
            graph[src][destination]=1;
            graph[destination][src]=1;
        }
        break;
    case 2:
        for(int i=1; i<= edges; i++)
        {
            cin>>src>>destination;
            graph[src][destination]=1;
        }
        break;
    case 3:
        cout<<"Weight of one edge?"<<endl;
        cin>>weight;
        for(int i=1; i<= edges; i++)
        {
            cin>>src>>destination;
            graph[src][destination]=weight;
            graph[destination][src]=weight;
        }

        break;
    case 4:
        cout<<"Weight of one edge?"<<endl;
        cin>>weight;
        for(int i=1; i<= edges; i++)
        {
            cin>>src>>destination;
            graph[src][destination]=weight;
        }
        break;
    }
    return weight;
}
bool vis[mx];
int dist[mx];
int adjacency_nodes(int edges,int node,int arr[])
{
    int count=1;
    for(int i=1; i<=edges; i++)
    {
        if(graph[node][i]!=0)
        {
            arr[count++]=i;
        }
    }
    return count-1;
}
void bfs(int src,int edges)
{
    queue<int> q;
    vis[src]=1;
    dist[src]=0;
    q.push(src);
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        int arr[100];
        int n=adjacency_nodes(edges,node,arr);

        for(int i=1; i<=n; i++)
        {
            int next=arr[i];
            if(vis[next]==0)
            {
                vis[next]=1;
                dist[next]=dist[node]+1;
                q.push(next);
            }
        }
    }

}
int main()
{
    fastIO
//    freopen("input.txt","r",stdin);
    int nodes,edges,choice;

    while(1)
    {
        cout<<"Your choice:\n"
            "1.Undirected Unweighted Graph\n"
            "2.Directed Unweighted Graph\n"
            "3.Undirected Weighted Graph\n"
            "4.Directed Weighted Graph\n"
            <<endl;
        cin>>choice;
        if(choice<1||choice>4)
            continue;
        else
            break;
    }
    cout<<"How many nodes?"<<endl;
    cin>>nodes;
    cout<<"How many edges?"<<endl;
    cin>>edges;

    int weight=take_input(nodes,edges,choice);

    int src;
    cout<<"Source node?"<<endl;
    cin>>src;
    bfs(src,edges);
    cout<<"From node "<<src<<endl;
    if(choice==1||choice==2)
    {
        for(int i=1; i<=nodes; i++)
        {
            if(i!=src)
                cout<<"Distance of "<<i<<" is "<<dist[i]<<endl;
        }
    }
    else
    {
        for(int i=1; i<=nodes; i++)
        {
            if(i!=src)
                cout<<"Distance of "<<i<<" is "<<(dist[i])*weight<<endl;
        }

    }
    return 0;
}
