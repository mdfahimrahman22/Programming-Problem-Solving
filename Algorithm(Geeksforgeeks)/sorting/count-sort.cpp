#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void count_sort(vector<int> &a)
{
    int n=a.size();
    int k=*max_element(a.begin(),a.end());
    int count[k+1]= {0};
    vector<int> b(n);
    for(int i=0; i<n; i++)count[a[i]]++;
    for(int i=1; i<=k; i++)count[i]+=count[i-1];
    for(int i=n-1; i>=0; i--)b[--count[a[i]]]=a[i];
    for(int i=0; i<n; i++)a[i]=b[i];

}


void print_vector(vector<int> &v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    fastIo
    vector<int> a= {0,8,3,3,5,6,2,2,8,1};
    count_sort(a);

    print_vector(a);

    return 0;
}
