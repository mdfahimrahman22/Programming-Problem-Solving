#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fastIo
//    freopen("input.txt","r",stdin);

    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int d_cost=x*100;
        int c_cost=y*10;
        if(d_cost<c_cost)
        {
            cout<<"Disposable"<<endl;
        }
        else
        {
            cout<<"Cloth"<<endl;
        }
    }
    return 0;
}

