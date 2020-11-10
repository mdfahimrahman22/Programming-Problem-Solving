#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int solve(int b[],int g[],int n)
{
    sort(b,b+n);
    sort(g,g+n);
    int finalArr[2*n+10],j=0,x,y;
    if(g[0]<b[0])
    {
        for(int i=0; i<n; i++)
        {
            finalArr[j++]=g[i];
            finalArr[j++]=b[i];
        }
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            finalArr[j++]=b[i];
            finalArr[j++]=g[i];
        }
    }
    for(int i=1; i<2*n; i++)
    {
        if(finalArr[i-1]>finalArr[i])
            return 0;
    }
    return 1;

}
int main()
{
    fastIO
//    freopen("abc.txt","r",stdin);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int b[n+10],g[n+10];
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>g[i];
        }
        if(solve(b,g,n))cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
