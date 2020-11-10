#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b)
{
    return (a*b)/__gcd(a,b);
}
int main()
{
    //freopen("abc.txt","r",stdin);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        cin>>a[0];
        if(n==1)
        {
            if(a[0]%2!=0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
                continue;
        }
        int res=a[0];
        for(int i=1; i<n; i++)
        {
            cin>>a[i];
            res=lcm(a[i],res);
        }

        if(res%2!=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }





    return 0;
}
