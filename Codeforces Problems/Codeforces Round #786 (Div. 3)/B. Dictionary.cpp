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
        int pos1=s[0]-'a'+1;
        int pos2=s[1]-'a'+1;
        if(pos1<pos2)pos2--;
        int res=(pos1-1)*25+pos2;
        cout<<res<<endl;
    }
    return 0;
}
