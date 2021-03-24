#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
class Item
{
public:
    int w;//Weight
    int b;//Benefit
    Item() {}
    Item(int w,int b)
    {
        this->w=w;
        this->b=b;
    }

};
int main()
{
    freopen("input.txt","r",stdin);
    fastIo

    int n;//Number of elements
    int w;//Max capacity
    int i;
    cin>>n>>w;
    Item item[n+10];
    int V[n+10][w+10],x,y;
    for(i=1; i<=n; i++)
    {
        cin>>x>>y;
        item[i].w=x;
        item[i].b=y;
    }
    for(i=0; i<=w; i++)
    {
        V[0][i]=0;
    }
    for(i=0; i<=n; i++)
    {
        V[i][0]=0;
    }
    for(i=1; i<=n; i++)
    {
        for(int j=1; j<=w; j++)
        {
            if(item[i].w>j)
            {
                V[i][j]=V[i-1][j];

            }
            else
            {
                int now=item[i].b+V[i-1][j-item[i].w];
                int prev=V[i-1][j];
                (now>prev)?V[i][j]=now:V[i][j]=prev;
            }
        }
    }
    cout<<"i\\w matrix:\n";
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=w; j++)
        {
            cout<<"\t"<<V[i][j]<<" ";
        }
        cout<<endl;
    }
    int taken[n+10]= {0};
    for(i=n; i>0; i--)
    {
        int j=w;
        if(V[i][j]==V[i-1][j]&&i!=0)
        {
            continue;
        }
        else
        {
            taken[i]=1;
            j=j-item[i].w;
        }
    }
    cout<<"Items taken:\n";
    for(i=1; i<=n; i++)
    {
        cout<<taken[i]<<" ";
    }

    return 0;
}
//Input
//4 5
//2 3
//3 4
//4 5
//5 6
