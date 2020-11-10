#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
bool isBall(char c)
{
    if(c=='O'||c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6')
        return true;
    return false;
}
void printResult(int balls)
{
    if(balls<6)
    {
        if(balls==1)
        {
            cout<<"1 BALL\n";
            return;
        }
        else
        {
            cout<<balls<<" BALLS\n";
            return;
        }
    }
    else
    {
        int overs=balls/6;

        balls=balls%6;

        if(balls==0)
        {
            if(overs==1)
            {
                cout<<"1 OVER\n";
                return;
            }
            else
            {
                cout<<overs<<" OVERS\n";
                return;
            }
        }
        else if(balls==1)
        {
            if(overs==1)
            {
                cout<<overs<<" OVER "<<balls<<" BALL\n";
                return;
            }
            else
            {
                cout<<overs<<" OVERS "<<balls<<" BALL\n";
                return;
            }
        }
        else
        {
            if(overs==1)
            {
                cout<<overs<<" OVER "<<balls<<" BALLS\n";
                return;
            }
            else
            {
                cout<<overs<<" OVERS "<<balls<<" BALLS\n";
                return;
            }
        }
    }
}
int main()
{
    fastIO
//    freopen("input.txt","r",stdin);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int balls=count_if(s.begin(),s.end(),isBall);
        printResult(balls);
    }
    return 0;
}
