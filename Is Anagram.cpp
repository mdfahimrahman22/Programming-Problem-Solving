#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIO
//    freopen("input.txt","r",stdin);

    string s1,s2;
    map<char,int>mp1,mp2;
    cin>>s1>>s2;
    int n1=s1.size();
    int n2=s2.size();
    if(n1!=n2)
    {
        cout<<"No\n";
        return 0;
    }
    for(int i=0; i<n1; i++)
    {
        mp1[s1[i]]++;
    }
    for(int i=0; i<n2; i++)
    {
        mp2[s2[i]]++;
    }
    for(int i=0; i<26; i++)
    {
        if(mp1[i+97]!=mp2[i+97])
        {
            cout<<"No\n";

            return 0;
        }
    }
    cout<<"Yes\n";

    return 0;
}
