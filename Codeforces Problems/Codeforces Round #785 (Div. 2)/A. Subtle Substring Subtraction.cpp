#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    fastIo
//    freopen("input.txt","r",stdin);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int sum=0;
        if(n%2==0)
        {
            for(int i=0; i<n; i++)
            {
                sum+=(s[i]-96);
            }
            cout<<"Alice "<<sum<<endl;

        }
        else
        {
            if(n==1)
            {
                cout<<"Bob "<<(int)s[0]-96<<endl;
                continue;
            }
            else
            {
                int start=0,end=n,point_bob=0;
                if(s[0]>s[n-1])
                {
                    end--;
                    point_bob=(int)s[n-1]-96;
                }
                else
                {
                    start++;
                    point_bob=(int)s[0]-96;
                }
                for(int i=start; i<end; i++)
                {
                    sum+=(s[i]-96);
                }
                cout<<"Alice "<<sum-point_bob<<endl;
            }
        }
    }

    return 0;
}
