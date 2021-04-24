#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
//freopen("input.txt","r",stdin);

    int n,k;
    cin>>n>>k;
    int a[n+10];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(binary_search(a,a+n,k))
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }


    return 0;
}

