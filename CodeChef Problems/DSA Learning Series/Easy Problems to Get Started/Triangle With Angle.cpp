#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c==180&&a>0&&b>0&&c>0)cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}

