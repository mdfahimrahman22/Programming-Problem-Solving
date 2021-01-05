#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int graph[100][100], visited[100];
void take_input(int nodes,int edges,int choice)
{
    int src,destination,weight;
    cout<<"Enter source destination weight(if needed):"<<endl;
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
        for(int i=1; i<= edges; i++)
        {
            cin>>src>>destination>>weight;
            graph[src][destination]=weight;
            graph[destination][src]=weight;
        }

        break;
    case 4:
        for(int i=1; i<= edges; i++)
        {
            cin>>src>>destination>>weight;
            graph[src][destination]=weight;
        }
        break;
    }
}
void dfs(int starting_node,int nodes)
{
    int j;
    visited[starting_node] = 1;
    cout<<" "<<starting_node<<"->";
    for(int j=1; j <= nodes; j++)
    {
        if(graph[starting_node][j] && !visited[j])
            dfs(j,nodes);
    }
}

int main()
{
    fastIO
//freopen("input.txt","r",stdin);

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
    take_input(nodes,edges,choice);

    int starting_node;
    cout<<"Enter the starting node: "<<endl;
    cin>>starting_node;
    cout<<"DFS traversal: "<<endl;
    dfs(starting_node,nodes);
    return 0;



    return 0;
}
