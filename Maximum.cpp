#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int maximum=INT_MIN;
    int x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(maximum<x)
        {
            maximum=x;
        }
    }
    cout<<maximum<<endl;





    return 0;
}
