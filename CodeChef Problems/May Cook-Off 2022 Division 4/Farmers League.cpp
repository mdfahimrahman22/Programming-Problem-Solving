#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef unsigned long long int ull;
int main()
{
    fastIo
//    freopen("input.txt","r",stdin);

    int t;
    ull team;
    cin>>t;
    while(t--)
    {
        cin>>team;
        ull n=team-1;
        ull total_games=n*(n+1)/2;
        ull total_games_without_a_team=n*(n-1)/2;
        ull a_team_plays=total_games=total_games-total_games_without_a_team;
        ull b_team_wins=ceil((a_team_plays-1)/2.0);
        ull points_diff=(a_team_plays-b_team_wins)*3;
        cout<<points_diff<<endl;
    }
    return 0;
}
