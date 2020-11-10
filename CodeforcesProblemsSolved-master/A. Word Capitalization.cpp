#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    cout<<(char)toupper(s[0]);
    for(int i=1; i<n; i++)
    {
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}
