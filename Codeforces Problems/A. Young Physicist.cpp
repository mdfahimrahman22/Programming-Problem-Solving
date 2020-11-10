#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("abc.txt","r",stdin);

    int n,x,y,z;
    long int sum_x=0,sum_y=0,sum_z=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y>>z;
        sum_x+=x;
        sum_y+=y;
        sum_z+=z;

    }
    if(sum_x==0&&sum_y==0&&sum_z==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }




    return 0;
}
