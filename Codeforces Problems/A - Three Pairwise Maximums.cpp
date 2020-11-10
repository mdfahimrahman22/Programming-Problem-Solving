#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    //freopen("abc.txt","r",stdin);
 
    int t;
    ll a[4],b,c,s;
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];
        if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[0])
        {
            cout<<"YES\n";
            cout<<a[0]<<" "<<a[0]<<" "<<a[0]<<endl;
            continue;
        }
        sort(a,a+3);
        int flag=0,pos1,pos2;
        for(int i=0; i<3&&flag==0; i++)
        {
            for(int j=0; j<3; j++)
            {
                if(a[i]==a[j]&&i!=j)
                {
                    flag=1;
                    pos1=i;
                    pos2=j;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"NO\n";
            continue;
        }
        if(pos1==0&&pos2==1&&a[1]<a[2])
        {
            cout<<"NO\n";
            continue;
        }
        else
        {
            cout<<"YES\n";
            b=max(max(a[0],a[1]),a[2]);
            c=min(min(a[0],a[1]),a[2]);
            cout<<1<<" "<<c<<" "<<b<<endl;
 
        }
 
    }
 
 
 
    return 0;
}