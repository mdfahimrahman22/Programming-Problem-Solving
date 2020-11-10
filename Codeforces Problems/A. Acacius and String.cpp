#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
bool myfunc(string s,string sub,string sub2[],int n,int n2)
{
    int pos=-1,error=0;
    bool flag=0;

    for (int i=0; i<n2; i++)
    {
        pos=-1;
        flag=0;
        for(int j=0; j<7; j++)
        {
            if(sub2[i][j]==sub[j]||sub2[i][j]=='?')
            {
                if(j==6)
                {
                    pos=i;
                    break;
                }
                continue;
            }
            if(sub2[i][j]!=sub[j]||sub2[i][j]!='?')
            {
                break;
            }

        }

        if(pos!=-1)
        {
            break;
        }

    }
    if(pos==-1)
    {
        cout<<"NO\n";
        return 0;
    }
    else
    {

        s.replace(pos,7,sub);
        for(int i=0; i<n; i++)
        {
            if(s[i]=='?')
                s[i]='d';

        }
        cout<<"YES\n";
        cout<<s<<endl;
        return 1;

    }

}
int main()
{
    fastIO
    //freopen("abc.txt","r",stdin);

    int t=1;
    cin>>t;
    while(t--)
    {
        string s;
        int n;
        cin>>n;
        cin>>s;
        n=s.size();
        string sub="abacaba";

        int n2=0,countSub=0;
        string sub2[n];
        for(int i=0; i<n; i++)
        {
            sub2[n2]=s.substr(i,7);
            if(sub2[n2]==sub)
            {
                countSub++;
            }
            n2++;
            if(i+7==n)break;
        }
//        cout<<countSub<<endl;
        if(countSub==1)
        {
            for (int i=0; i<n; i++)
            {
                if(s[i]=='?')
                    s[i]='d';
            }
            cout<<"YES\n"<<s<<"\n";
            continue;
        }
        else if(countSub>1)
        {
            cout<<"NO\n";
            continue;
        }
        else
        {

            myfunc(s,sub,sub2,n,n2);

        }

    }

    return 0;
}
