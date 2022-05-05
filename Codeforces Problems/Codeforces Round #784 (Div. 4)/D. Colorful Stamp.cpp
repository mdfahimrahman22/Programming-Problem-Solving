#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool isAllCharSame(string s)
{
    return s.find_first_not_of(s[0])==string::npos;
}
void solve()
{
    int n,b_count=0,r_count=0;
    string s;
    cin>>n>>s;
    if(n==1)
    {
        (s[0]=='W')?cout<<"YES"<<endl:cout<<"NO"<<endl;
        return;
    }
    else
    {
        if(isAllCharSame(s))
        {
            (s[0]=='W')?cout<<"YES"<<endl:cout<<"NO"<<endl;
            return;
        }
        string sub_str;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='W')
            {
                if(sub_str.size()>0&&isAllCharSame(sub_str))
                {
                    cout<<"NO"<<endl;
                    return;
                }
                else
                {
                    sub_str="";
                }
            }
            else
            {
                sub_str.push_back(s[i]);
            }
        }

        if(sub_str.size()>0&&isAllCharSame(sub_str))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }


}
int main()
{
    fastIo
//    freopen("input.txt","r",stdin);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
