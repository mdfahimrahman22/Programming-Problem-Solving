#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
class Graph
{
public:
    char source;
    char dest;
    int weight;

    Graph(char source,char dest,int weight)
    {
        this->source=source;
        this->dest=dest;
        this->weight=weight;
    }
    Graph() {}
};
bool compareInterval(Graph g1,Graph g2)
{
    return (g1.weight<g2.weight);
}

char findParent(char v,map<char,char> parent)
{
    if(parent[v]==v)return v;

    return findParent(parent[v],parent);
}

int main()
{
    fastIo
    freopen("input.txt","r",stdin);
    int E,V,w;
    char s,d;

    cin>>V>>E;
    vector<Graph> graph;
    map<char,char> parent;

    for(int i=0; i<E; i++)
    {
        cin>>s>>d>>w;
        graph.push_back(Graph(s,d,w));
        parent[s]=s;
    }

    sort(graph.begin(),graph.end(),compareInterval);

    int MSTCost=0;
    for(int i=0; i<E; i++)
    {

        char sourceParent=findParent(graph[i].source,parent);
        char destinationParent=findParent(graph[i].dest,parent);
        if(sourceParent!=destinationParent)
        {
            cout<<graph[i].source<<" "<<graph[i].dest<<" "<<graph[i].weight<<endl;
            MSTCost+=graph[i].weight;
            parent[sourceParent]=destinationParent;
        }

    }
    cout<<"Weight of MST is "<<MSTCost<<endl;


    graph.clear();

    return 0;
}

