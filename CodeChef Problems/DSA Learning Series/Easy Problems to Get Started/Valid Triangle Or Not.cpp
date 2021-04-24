#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
    freopen("input.txt","r",stdin);

    int n=3;
    int a[n];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+n);
    if(a[0]+a[1]<a[2])cout<<"YES\n";
    else cout<<"NO\n";




    return 0;
}

