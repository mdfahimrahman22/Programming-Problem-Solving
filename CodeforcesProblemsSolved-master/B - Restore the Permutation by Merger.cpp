#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("abc.txt","r",stdin);
 
    int t=1;
    cin>>t;
    while(t--)
    {
        int in,n;
        cin>>n;
        vector<int> v(n);
        v.clear();
        int a[n*2+10],b[n+10];
        cin>>in;
        v.push_back(in);
        for(int i=1; i<2*n; i++)
        {vector<int>::iterator it;
            cin>>in;
            it=find(v.begin(),v.end(),in);
            if(it==v.end()){
                v.push_back(in);
            }
        }
 
        for(auto it=v.begin(); it!=v.end(); it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
 
    }
 
 
    return 0;
}