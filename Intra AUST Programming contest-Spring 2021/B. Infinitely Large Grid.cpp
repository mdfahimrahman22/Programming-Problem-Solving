#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
//    freopen("input.txt","r",stdin);

    int n,max=1e4,t;
    int start_num,end_num;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
        {
            cout<<1<<" "<<1<<endl;
            continue;
        }

        for(int i=1; i<=max; i++)
        {

            start_num=i*(i+1)/2;
            end_num=i*(i-1)/2+1;
            cout<<start_num<<" to "<<end_num<<endl;
            if(start_num<=n && n<=end_num)
            {
                int row=i+1;
                for(int j=start_num,col=1; j<=end_num; j++,col++,row--)
                {
                    if(j==n)
                    {
                        cout<<row<<" "<<col<<endl;
                        break;
                    }
                }
                break;
            }
        }
    }
    return 0;
}
