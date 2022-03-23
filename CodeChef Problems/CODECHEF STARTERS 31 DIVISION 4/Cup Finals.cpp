#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
//    freopen("input.txt","r",stdin);
    int x,y,d;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>d;
        if(abs(x-y)<=d)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }


    return 0;
}
