#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("abc.txt","r",stdin);

    int r,c,x;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cin>>x;
            if(x==1)
            {
                r=i;
                c=j;
            }
        }

    }
    int set_r=0,set_c=0;
    if(r>3)
        set_r=r-3;
    else
        set_r=3-r;

    if(c>3)
        set_c=c-3;
    else
        set_c=3-c;
    cout<<set_c+set_r<<"\n";


    return 0;
}
