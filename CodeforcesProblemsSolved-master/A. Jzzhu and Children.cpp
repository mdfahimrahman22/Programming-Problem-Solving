#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIO
    //freopen("abc.txt","r",stdin);

    int n,m,in,maximum=INT_MIN;
    cin>>n>>m;
    int a[n+10],num_0=0;
    int index_of_max=n+1;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int i=0,index;
    while(num_0!=n)
    {
        if(i==n)
        {
            i=0;
        num_0=0;
        }
        if(a[i]>0)
        {
            a[i]=a[i]-m;
            index=i;
        }
        if(a[i]<=0)
        {
            num_0++;
        }
        i++;

    }
    cout<<index+1<<endl;


    return 0;
}
