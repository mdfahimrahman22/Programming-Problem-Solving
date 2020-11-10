#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIO
//    freopen("abc.txt","r",stdin);

    int t;

    cin>>t;
    while(t--)
    {
        string num;
        char a[1000],b[1000];
        int x=0,y=0;
        cin>>num;
        int n=num.size();
        for(int i=0; i<n; i++)
        {
            if(num[i]=='7')
            {
                num[i]='1';
                b[y++]='6';
            }
            else
            {
                if(y!=0)
                    b[y++]='0';
            }
        }
        cout<<num<<" ";
        for(int i=0; i<y; i++)
        {
            cout<<b[i];
        }
        cout<<endl;
    }

    return 0;
}
