#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
    int n,oddNum=1,evenNum=2;
    cin>>n;
    long long int odd=0,even=0;
    for(int i=0;i<n;i++){
        odd+=oddNum;
        oddNum+=2;
        even+=evenNum;
        evenNum+=2;
    }

    cout<<odd<<" "<<even<<endl;
    return 0;
}

