#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void func(ll x,ll y,ll wall[],int wall_num)
{
    int c,pos;
    for(int i=0; i<wall_num; i++)
    {
        if(x+y==wall[i])
        {
            if(x==0||y==0)
            {
                pos=i+1;
                cout<<pos<<endl;
                return;
            }
            else
            {
                cout<<-1<<endl;
                return;
            }

        }
    }

    if(x==0)
    {   pos=0;
        for(int i=0; i<wall_num; i++)
        {
            if(y>=wall[i])
            {
                pos=i+1;

            }
        }
        cout<<pos<<endl;
        return;
    }

    if(y==0)
    {   pos=0;
        for(int i=0; i<wall_num; i++)
        {
            if(x>=wall[i])
            {
                pos=i+1;

            }
        }
        cout<<pos<<endl;
        return;
    }
int h=x+y;
    for(int i=0; i<wall_num; i++)
    {
        if(h>=wall[i])
        {
            pos=i+1;

        }
    }
    cout<<pos<<endl;
    return;

}

int main()
{
    //freopen("abc.txt","r",stdin);

    int t;
    cin>>t;
    while(t--)
    {
        int wall_num;
        cin>>wall_num;
        ll wall[wall_num];
        for(int i=0; i<wall_num; i++)
        {
            cin>>wall[i];
        }
        int q;
        cin>>q;
        ll x,y;
        for(int i=0; i<q; i++)
        {
            cin>>x>>y;
            func(x,y,wall,wall_num);
        }
    }


    return 0;
}
