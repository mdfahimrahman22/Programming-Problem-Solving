#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIO
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    for(int i=0; i<n; i++)
    {
        if(s1[i]>='A'&&s1[i]<='Z')
            s1[i]=tolower(s1[i]);
        if(s2[i]>='A'&&s2[i]<='Z')
            s2[i]=tolower(s2[i]);

        if(s1[i]>s2[i])
        {
            cout<<1<<endl;
            return 0;
        }
        if(s1[i]<s2[i])
        {
            cout<<-1<<endl;
            return 0;
        }
    }

cout<<0<<endl;


    return 0;
}
