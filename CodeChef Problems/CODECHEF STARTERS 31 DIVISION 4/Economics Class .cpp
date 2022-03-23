#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
//    freopen("input.txt","r",stdin);

    int t;
    cin>>t;

    while(t--)
    {
        int n,equilibrium=0;
        cin>>n;
        int s[n+10],d[n+10];
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>d[i];
            if(s[i]==d[i])equilibrium++;
        }
        cout<<equilibrium<<endl;
    }



    return 0;
}
