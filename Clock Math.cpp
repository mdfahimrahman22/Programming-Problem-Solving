#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIO
    int hour,minute;
    cin>>hour>>minute;
    float angle=abs(0.5*(60*hour-11*minute));
    if((360-angle)<angle)
        cout<<fixed<<setprecision(7)<<(360-angle)<<endl;
    else
        cout<<fixed<<setprecision(7)<<angle<<endl;
    return 0;
}
