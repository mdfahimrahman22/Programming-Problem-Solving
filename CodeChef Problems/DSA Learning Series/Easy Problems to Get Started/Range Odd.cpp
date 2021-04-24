#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
    //freopen("input.txt","r",stdin);

    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        if(i%2!=0)cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}

