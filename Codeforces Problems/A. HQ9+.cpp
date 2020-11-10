#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIO
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0; i<n; i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            cout<<"YES\n";
            return 0;
        }

    }
    cout<<"NO\n";

    return 0;
}
