#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
    //freopen("input.txt","r",stdin);

    int n;
    cin>>n;
    int a[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=n-1; i>=0; i--)
        cout<<a[i]<<" ";
    cout<<endl;


    return 0;
}

