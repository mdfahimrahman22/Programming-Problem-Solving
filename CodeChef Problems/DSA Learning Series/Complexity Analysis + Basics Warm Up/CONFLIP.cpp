#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int findOddNum(int n)
{
    if(n%2==0)return n/2;
    else return n/2+1;
}

int main()
{
    fastIo
    //freopen("input.txt","r",stdin);

    int t,g,i,n,q,head,tail,odd,even;
    cin>>t;
    while(t--)
    {
        cin>>g;
        while(g--)
        {
            cin>>i>>n>>q;
            odd=findOddNum(n);
            even=n-odd;
            if(i==1)
            {
                if(n%2!=0)
                {
                    head=even;
                    tail=odd;
                }
                else
                {
                    head=odd;
                    tail=even;
                }
                if(q==1)
                {
                    cout<<head<<endl;
                    continue;
                }
                else
                {
                    cout<<tail<<endl;
                    continue;

                }
            }
            else
            {
                if(n%2!=0)
                {
                    head=odd;
                    tail=even;

                }
                else
                {
                    head=even;
                    tail=odd;
                }
                if(q==1)
                {
                    cout<<odd<<endl;
                    continue;
                }
                else
                {
                    cout<<even<<endl;
                    continue;
                }
            }


        }

    }

    return 0;
}

