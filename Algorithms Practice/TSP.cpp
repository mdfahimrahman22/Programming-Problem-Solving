#include<bits/stdc++.h>
using namespace std;
#define line cout<<endl
const int inf=2000000;
int n,m;
vector<int>path;
void print(vector<vector<int>>&matrix)
{
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[i].size();j++)
        {
            cout<<setw(5);
            if(matrix[i][j]==inf)
            {
                cout<<"inf";
            }
            else
            {
                cout<<matrix[i][j];
            }
        }
        line;
    }
}
int reduced_cost(vector<vector<int>>&vec,int n)
{
    int mini,cost=0;
    int cnt; //check if a row or column is ignored
    for(int i=0; i<n; i++) //reduce the row
    {
        mini=INT_MAX;
        cnt=0;
        for(int j=0; j<n; j++)
        {
            if(vec[i][j]==inf)//No way to go from place to same place
            {
                cnt++;
                continue;
            }
            mini=min(vec[i][j],mini);
        }
        for(int j=0; j<n; j++)
        {
            if(vec[i][j]==inf) //No way to go from place to same place
                continue;
            vec[i][j]-=mini;
        }
        cost+=mini;
        if(cnt==n)
            cost-=mini;
    }
    for(int i=0; i<n; i++) //reduce the column
    {
        mini=INT_MAX;
        cnt=0;
        for(int j=0; j<n; j++)
        {
            if(vec[j][i]==inf) //No way to go from place to same place
            {
                cnt++;
                continue;
            }
            //cout<<vec[j][i]<<" ";
            mini=min(vec[j][i],mini);
        }
        for(int j=0; j<n; j++)
        {
            if(vec[j][i]==inf) //No way to go from place to same place
                continue;
            vec[j][i]-=mini;
        }
        cost+=mini;
        if(cnt==n)
            cost-=mini;
    }
    return cost;
}
int TSP(vector<vector<int>>&vec,int source,int n)
{
    source--;
    int sourceinitial=source;
    int minCost=reduced_cost(vec,n);
    cout<<"Reduced cost matrix is:\n";
    print(vec);
    priority_queue<pair<int,pair<int,vector<vector<int>>>>>order;
    int visit[n]={0};
    order.push({-minCost,{source,vec}});
    while(true)
    {
        pair<int,pair<int,vector<vector<int>>>>temp;
        temp=order.top();
        source=temp.second.first;
        path.push_back(source+1);//storing the visiting path
        while(order.size()>0)
        {
            order.pop();
        }
        minCost=temp.first;
        minCost*=(-1);//make the cost positive
        int flag=0;
        visit[source]=1;//visit
        cout<<"Current node: "<<source+1<<endl;
        cout<<"Matrix:\n";
        print(temp.second.second);
        cout<<"Current cost is: "<<minCost<<endl;
        for(int nodeNow=0; nodeNow<n; nodeNow++)
        {
            if(visit[nodeNow]==0)
            {
                flag=1;
                vector<vector<int>>vec1;
                vec1 = temp.second.second;//copy the current node's reduce matrix to new vector for further operation
                for(int j=0; j<n; j++)
                {
                    vec1[source][j]=inf;//make the row inf
                    vec1[j][nodeNow]=inf;//make the column inf
                }
                vec1[nodeNow][sourceinitial]=inf;
                //cout<<"Current node: "<<nodeNow+1<<endl;
                //cout<<"Matrix:\n";
                //print(vec1);
                int tempCost=(temp.second.second[source][nodeNow]+reduced_cost(vec1,n));
                //print(vec1);
                tempCost*=(-1);
                order.push({-minCost+tempCost,{nodeNow,vec1}});
                //cout<<"Current cost is: "<<-(-minCost+tempCost)<<endl;
                line;
            }
        }
        if(!flag)
            break;
    }
    return minCost;
}
int main()
{

    cout<<"Enter the number of nodes: ";
    cin>>n;
    vector<vector<int>>vec(n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int x;
            cin>>x;
            vec[i].push_back(x);
            if(i==j)
            {
                vec[i][j]=inf;
            }
        }
    }
    int source;
    cout<<"Enter source node: ";
    cin>>source;
    int x=TSP(vec,source,n);
    cout<<"Minimum cost is: "<<x<<endl;
    cout<<"Visiting path: ";
    for(int i=0;i<path.size();i++)
    {
        cout<<path[i]<<" ";
    }
    cout<<source;
    line;
    return 0;
}
 /*
0 20 30 10 11
15 0 16 4 2
3 5 0 2 4
19 6 18 0 3
16 4 7 16 0

0 10 15 20
10 0 35 25
15 35 0 30
20 25 30 0
*/
