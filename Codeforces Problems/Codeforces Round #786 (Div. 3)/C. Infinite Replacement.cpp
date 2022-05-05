#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve()
{

    string s,t;
    cin>>s>>t;
    string aInT="";
    for(int i=0; i<t.size(); i++)
    {
        if(t[i]=='a')
        {
            aInT+="a";
        }
    }
    if(aInT.size()==t.size())
    {

        if(t.size()<s.size())cout<<1<<endl;
        else cout<<-1<<endl;
        return;
    }

    if(aInT.size()>0)
    {
        cout<<-1<<endl;
        return;
    }
    else
    {
        cout<<s.size()+1<<endl;
    }

}

int main()
{
    fastIo
    freopen("input.txt","r",stdin);

    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }

    return 0;
}
