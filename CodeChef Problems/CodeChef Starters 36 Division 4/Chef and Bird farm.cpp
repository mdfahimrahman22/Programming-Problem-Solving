#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
    int t,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        if(z%x==0&&z%y==0)cout<<"ANY"<<endl;
        else if(z%x==0&&z%y!=0)cout<<"CHICKEN"<<endl;
        else if(z%x!=0&&z%y==0)cout<<"DUCK"<<endl;
        else cout<<"NONE"<<endl;
    }
    return 0;
}
