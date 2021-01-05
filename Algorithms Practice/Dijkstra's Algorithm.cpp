#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int graph[100][100];
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
int printSolution(int dist[], int nodes)
{
    for (int i = 2; i <= nodes; i++)
        cout<<"Source:1 to Destination:"<<i<<" Shortest Distance = "<<dist[i]<<endl;
}
int minDistance(int dist[], bool node_visited[],int edges)
{
    int Min = INT_MAX, min_index;

    for (int i = 1; i <=edges ; i++)
        if (node_visited[i] == false && dist[i] <= Min)
            Min = dist[i], min_index = i;

    return min_index;
}
void dijkstra(int nodes,int edges)
{
    int dist[edges+10]; //src to i short distance

    bool node_visited[edges+10];//if node=visited?true:false

    // Initialize all distances as INFINITE and node_visited[] as false
    for (int i = 1; i <= edges; i++)
        dist[i] = INT_MAX, node_visited[i] = false;

    //always source-> source distance=0
    dist[1] = 0;

    // Find shortest path for all vertices
    for (int i = 1; i <=edges; i++)
    {

        int min_index = minDistance(dist, node_visited,edges);

        node_visited[min_index] = true;

        for (int i = 1; i <= edges; i++)
            if (!node_visited[i] && graph[min_index][i] && dist[min_index] != INT_MAX
                    && dist[min_index] + graph[min_index][i] < dist[i])
                dist[i] = dist[min_index] + graph[min_index][i];
    }

    // print solution
    printSolution(dist, nodes);
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
    take_input(nodes,edges,choice);
    dijkstra(nodes,edges);



    return 0;
}
