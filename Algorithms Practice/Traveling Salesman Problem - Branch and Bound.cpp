#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
#define inf 999999999
using namespace std;
void copyVec(int n,vector<int> v1[],vector<int>v2[])
{
    for (int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            v1[i][j]=v2[i][j];
}
void printVec(int n,vector<int>vec[])
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(vec[i][j]!=inf)
                cout<<vec[i][j]<<" ";
            else
            {
                cout<<"I"<<" ";
            }
        }

        cout<<endl;
    }
}
void printArr(int n,int arr[][100])
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(arr[i][j]!=inf)
                cout<<arr[i][j]<<" ";
            else
            {
                cout<<"I"<<" ";
            }
        }
        cout<<endl;
    }
}
int findMinCost(int n,int arr[][100],int ignore_row,int ignore_col,int source,vector<int>vec_row[],vector<int>vec_col[])
{
    int min_cost_row=0,min_cost_col=0,temp;
    if(ignore_col==0&&ignore_row==0);
    else
    {
        for(int i=1; i<=n; i++)
        {
            vec_row[ignore_row][i]=inf;
            vec_col[i][ignore_row]=inf;
        }
        for(int i=1; i<=n; i++)
        {
            vec_col[ignore_col][i]=inf;
            vec_row[i][ignore_col]=inf;
        }
        temp=arr[ignore_col][source];
        arr[ignore_col][source]=inf;
        vec_row[ignore_col][source]=inf;
        vec_col[source][ignore_col]=inf;
    }

    for(int i=1; i<=n; i++)
    {
        if(i==ignore_row)continue;
        int min_row=*min_element(vec_row[i].begin()+1,vec_row[i].end());
        min_cost_row+=min_row;
        for(int j=1; j<=n; j++)
        {
            if(j==ignore_col)continue;
            if(min_row==0)break;
            if(i!=j&&arr[i][j]!=inf)
            {
                arr[i][j]-=min_row;
                vec_row[i][j]=arr[i][j];
                vec_col[j][i]=arr[i][j];
            }
        }

    }

    for(int i=1; i<=n; i++)
    {
        if(i==ignore_col)continue;
        int min_col=*min_element(vec_col[i].begin()+1,vec_col[i].end());
        min_cost_col+=min_col;
        for(int j=1; j<=n; j++)
        {
            if(j==ignore_row)continue;
            if(min_col==0)break;
            if(i!=j&&arr[j][i]!=inf)
            {
                arr[j][i]-=min_col;
                vec_row[j][i]=arr[j][i];
                vec_col[i][j]=arr[j][i];
            }
        }

    }

    return (min_cost_col+min_cost_row);

}
void TSP(int n,int arr[][100],int source,vector<int>vec_row[],vector<int>vec_col[])
{
    int arr2[n+10][100];
    memcpy (arr2, arr, (n+10)*100*sizeof(int));

    int reduced_cost=findMinCost(n,arr2,0,0,source,vec_row,vec_col);
    cout<<"Reduced cost: "<<reduced_cost<<endl;

//    cout<<"Reduced Matrix:\n";
//    printArr(n,arr2);

//    cout<<"Vector Row:\n";
//    printVec(n,vec_row);
//    cout<<"Vector Column:\n";
//    printVec(n,vec_col);
    memcpy (arr, arr2, (n+10)*100*sizeof(int));
    vector<int>reduced_vec_row[n+10],reduced_vec_col[n+10];
    for(int i=1; i<=n+1; i++)
    {
        reduced_vec_row[i].assign(n+1, inf);
        reduced_vec_col[i].assign(n+1, inf);
    }
    copyVec(n,reduced_vec_row,vec_row);
    copyVec(n,reduced_vec_col,vec_col);
    vector<int>visited(n+1,0);
    int nextMinCostNode=source,nextMinCost,reduced_cost2;
    int i,j,k;
    int a[]= {0,1,4};
    for(k=1; k<=2; k++ )
    {
        i=a[k];
        visited[i]=1;
        nextMinCost=inf;

        for(int j=1; j<=n; j++)
        {
            if(i!=j&&visited[j]==0)
            {
                reduced_cost2=findMinCost(n,arr2,i,j,source,vec_row,vec_col)+arr[i][j]+reduced_cost;
//                cout<<"Reduced cost "<<i<<"->"<<j<<": "<<reduced_cost2<<endl;
                cout<<"Cost "<<i<<"->"<<j<<": "<<reduced_cost2<<endl;
                if(reduced_cost2<=nextMinCost)
                {
                    nextMinCost=reduced_cost2;
                    nextMinCostNode=j;
                }

                copyVec(n,vec_row,reduced_vec_row);
                copyVec(n,vec_col,reduced_vec_col);
                memcpy (arr2, arr, (n+10)*100*sizeof(int));
            }
        }
        reduced_cost2=findMinCost(n,arr2,i,nextMinCostNode,source,vec_row,vec_col)+arr[i][j]+reduced_cost;

        cout<<nextMinCost<<endl;
        if(i>n)break;
    }


}

int main()
{
    fastIo
    freopen("input.txt","r",stdin);
    int edges,nodes;
    cin>>edges>>nodes;
    vector<int>vec_row[nodes+10];
    vector<int>vec_col[nodes+10];
    for(int i=1; i<=nodes+1; i++)
    {
        vec_row[i].assign(nodes+1, inf);
        vec_col[i].assign(nodes+1, inf);
    }
    int A[nodes+10][100];
    for(int i=1; i<=nodes; i++)
    {
        for(int j=1; j<=nodes; j++)
        {
            A[i][j]=inf;
        }
    }
    for(int i=0; i<edges; i++)
    {
        int u,v,val;
        cin>>u>>v>>val;
        A[u][v]=val;
        vec_row[u][v]=val;
        vec_col[v][u]=val;
    }
//    cout<<"Initial Matrix:\n";
//    printArr(nodes,A);
    TSP(nodes,A,1,vec_row,vec_col);

    return 0;
}
