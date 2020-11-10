#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
//    freopen("input.txt","r",stdin);

    int x,y,avg,t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        avg=(x+y)/2;
        if(avg%2==0)
        {
            cout<<"Sadia will be happy.\n";
        }
        else
        {
            cout<<"Oops!\n";
        }

    }
    return 0;
}
