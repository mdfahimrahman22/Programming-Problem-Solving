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
        int rating;
        cin>>rating;
        if(rating>=1900)cout<<"Division 1"<<endl;
        else if(rating<=1899&&rating>=1600)cout<<"Division 2"<<endl;
        else if(rating<=1599&&rating>=1400)cout<<"Division 3"<<endl;
        else cout<<"Division 4"<<endl;
    }


    return 0;
}
