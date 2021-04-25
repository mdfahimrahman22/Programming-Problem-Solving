#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long int ll;
int main()
{
    fastIo
    //freopen("input.txt","r",stdin);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int count=1,a[n+10];
        cin>>a[0];
        for(int i=1; i<n; i++)
        {
            cin>>a[i];
            if(a[i]>a[i-1])
            {
                a[i]=a[i-1];
            }
            else
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
