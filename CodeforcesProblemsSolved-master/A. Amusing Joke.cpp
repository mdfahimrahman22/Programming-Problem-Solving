#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIO
    //freopen("abc.txt","r",stdin);

    string s1,s2,s3;
    int a[30],b[30];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    cin>>s1>>s2>>s3;
    if(s1.size()+s2.size()!=s3.size())
    {
        cout<<"NO\n";
    }
    else
    {
        int n=s1.size();
        for(int i=0; i<n; i++)
        {
            a[s1[i]-65]++;
        }
        n=s2.size();
        for(int i=0; i<n; i++)
        {
            a[s2[i]-65]++;
        }
        n=s3.size();
        for(int i=0; i<n; i++)
        {
            b[s3[i]-65]++;
        }
        for(int i=0; i<=26; i++)
        {
            if(a[i]!=b[i])
            {
                cout<<"NO\n";
                return 0;
            }
        }
        cout<<"YES\n";


    }



    return 0;
}
