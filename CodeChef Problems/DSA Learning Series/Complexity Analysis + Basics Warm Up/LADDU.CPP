#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
    //freopen("input.txt","r",stdin);

    int t;
    cin>>t;
    while(t--)
    {
        int activity,rank,bonus=0,laddu=0,originVal,severity;
        string activityStr,origin;
        cin>>activity>>origin;
        if(origin[0]=='I')originVal=200;
        else originVal=400;
        while(activity--)
        {
            cin>>activityStr;
            if(activityStr.compare("CONTEST_WON")==0)
            {
                cin>>rank;
                if(rank<=20)
                {
                    laddu+=300+20-rank;
                }
                else
                {
                    laddu+=300;
                }
            }
            else if(activityStr.compare("BUG_FOUND")==0)
            {
                cin>>severity;
                laddu+=severity;
            }
            else if(activityStr.compare("TOP_CONTRIBUTOR")==0)
            {
                laddu+=300;
            }
            else if(activityStr.compare("CONTEST_HOSTED")==0)
            {
                laddu+=50;
            }

        }
        cout<<laddu/originVal<<endl;
    }

    return 0;
}

