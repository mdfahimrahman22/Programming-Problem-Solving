#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    unsigned long int sum=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        sum+=x;
        if(sum%(i+1)==0)
        {
            unsigned long int avg=sum/(i+1);
            cout<<avg<<endl;
        }
        else
        {
            float avg=sum/(float)(i+1);
            cout<<fixed<<setprecision(10)<<avg<<endl;
        }

    }
    return 0;
}
