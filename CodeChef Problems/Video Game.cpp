#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    //freopen("abc.txt","r",stdin);

    int n;
    ll h;
    cin>>n>>h;
    ll box[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>box[i];
    }
    int q,cur_pos=0;
    bool has_box=0;
    while(1)
    {
        cin>>q;
        if(q==0)
        {
            break;
        }
        else if(q==1)
        {
            if(cur_pos>0)
                cur_pos--;
            continue;
        }

        else if(q==2)
        {
            if(cur_pos<n-1)
                cur_pos++;
            continue;
        }
        else if(q==3)
        {
            if(!has_box)
                if(box[cur_pos]>0)
                {
                    box[cur_pos]--;
                    has_box=1;
                }
        }
        else
        {if(has_box)
            if(box[cur_pos]<h)
            {
                box[cur_pos]++;
                has_box=0;
            }
        }


    }

    for(ll i=0; i<n; i++)
    {
        cout<<box[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
