#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

#define n 5
#define inf 9999999
#define nill 8888

void printDist(int arr[][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            (arr[i][j] != inf)?cout<<arr[i][j]<<"\t":cout<<"I"<<"\t";

        cout<<endl;
    }
}
void printPath(int arr[][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            (arr[i][j] != nill)?cout<<arr[i][j]<<"\t":cout<<"N"<<"\t";

        cout<<endl;
    }
}
void test(int s,int d,int pi[][n])
{
    int i=pi[s-1][d-1];
    for(int j=0; j<10; j++)
    {
        cout<<i<<"->";
        i=pi[s-1][i-1];
        if(i==nill)break;
    }
}
void allShortestPath(int dist[][n],int pi[][n])
{
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {

            if(i!=j)
            {
                cout<<"From "<<i+1<<" to "<<j+1<<": ";

                int k=pi[i][j];
                v.push_back(j+1);
                v.push_back(k);
                for(int stp=0; stp<n; stp++)
                {
                    k=pi[i][k-1];
                    if(k==nill)break;
                    v.push_back(k);
                }
                reverse(v.begin(),v.end());
                int vsize=v.size();
                for(int it=0; it<vsize; it++)
                {
                    (it==vsize-1)?cout<<v[it]:cout<<v[it]<<"->";
                }
                v.clear();

                cout<<" and cost = "<<dist[i][j]<<endl;

            }

        }

    }
}



void floydWarshall (int matrix[][n],int dist[][n],int pi[][n])
{
    for(int i=0; i<n; i++)for(int j=0; j<n; j++)dist[i][j]=matrix[i][j];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
        {
            if(matrix[i][j]==0||matrix[i][j]==inf)
            {
                pi[i][j]=nill;
            }
            else
            {
                pi[i][j]=i+1;
            }
        }


    for(int k=0; k<n; k++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                int temp=dist[i][k]+dist[k][j];
                if(dist[i][k]==inf||dist[k][j]==inf)temp=inf;
                if(dist[i][j]>temp&&i!=j)
                {
                    dist[i][j]=dist[i][k]+dist[k][j];
                    pi[i][j] =pi[k][j];
                }
            }
        }
    }

    cout<<"Shortest paths matrix :\n";
    printPath(pi);
    cout<<"Shortest distances matrix :\n";
    printDist(dist);
    cout<<"Shortest paths :\n";
    allShortestPath(dist,pi);

}
int main()
{
    fastIO
    int matrix[n][n] =
    {
        {0, 3, 8,inf, -4},
        {inf, 0,inf, 1, 7},
        {inf, 4,0,inf, inf},
        {2, inf, -5, 0,inf},
        {inf, inf, inf, 6,0}
    };
    int dist[n][n],pi[n][n];

    floydWarshall(matrix,dist,pi);

    return 0;
}
