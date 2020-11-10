#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIO
    //freopen("abc.txt","r",stdin);

    int n,c=0;
    cin>>n;
    int x[n+10],y[n+10],left=0,right=0,up=0,low=0;
    for(int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
    }

    for(int i=0; i<n; i++)
    {
        left=right=up=low=0;
        for(int j=0; j<n; j++)
        {
            if(i!=j)
            {
                if(x[j]>x[i]&&y[j]==y[i])
                {
                    right++;
                }
                if(x[j]<x[i]&&y[j]==y[i])
                {
                    left++;
                }
                if(x[j]==x[i]&&y[j]>y[i])
                {
                    up++;
                }
                if(x[j]==x[i]&&y[j]<y[i])
                {
                    low++;
                }

            }

        }
        if(right>0&&left>0&&up>0&&low>0)
        {c++;
            //cout<<x[i]<<" "<<y[i]<<endl;
        }

    }
cout<<c<<endl;



return 0;
}
