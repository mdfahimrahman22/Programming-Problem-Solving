#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
//    freopen("input.txt","r",stdin);

    int x;
    cin>>x;
    int sqroot=sqrt(x);
    for(int i=2; i<=sqroot; i++)
    {
        if(x%i==0)
        {
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";

    return 0;
}
