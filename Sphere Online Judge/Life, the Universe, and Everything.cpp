#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIO
//    freopen("input.txt","r",stdin);
    int x,a[100000],k=0,flag=0;

    while(cin>>x)
    {
        if(x==42)
            flag=1;
        if(!flag)
            a[k++]=x;

    }
    for(int i=0;i<k;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}
