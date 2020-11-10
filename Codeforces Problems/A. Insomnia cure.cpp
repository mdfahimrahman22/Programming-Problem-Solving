#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("abc.txt","r",stdin);

    set<int> s1;
    int k,l,m,n,d,t;
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>d;
    if(a[0]==1)
    {
        cout<<d<<endl;
        return 0;
    }
    for(int k=0; k<4; k++)
    {
        int i=0;
        for(int j=1; i<d; j++)
        {
            i=a[k]*j;
            if(i>d)break;
            s1.insert(i);
        }
    }


    cout<<s1.size()<<endl;
    return 0;
}
