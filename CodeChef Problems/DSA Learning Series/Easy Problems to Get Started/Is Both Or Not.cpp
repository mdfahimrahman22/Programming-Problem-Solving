#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
    int n;
    cin>>n;
    if(n%5==0&&n%11==0)
        cout<<"BOTH\n";
    else if(n%5==0||n%11==0)
        cout<<"ONE\n";
    else
        cout<<"NONE\n";

            return 0;
}

