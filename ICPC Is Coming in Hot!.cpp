#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<char,int>& a,pair<char,int>& b)
{
    return a.second>b.second;
}
vector<pair<char,int>> mapSort(map<char,int>& mp)
{
    vector<pair<char,int>>v;
    for(auto& it:mp)
    {
        v.push_back(it);
    }
    sort(v.begin(),v.end(),cmp);
    return v;
}
int main()
{
//    freopen("input.txt","r",stdin);

    map<char,int> mp;
    char num;

    while(scanf("%c",&num)!=EOF)
    {
        mp[num]++;
    }
    vector<pair<char,int>> v;
    v=mapSort(mp);
    cout<<v[0].first<<endl;

    return 0;
}
