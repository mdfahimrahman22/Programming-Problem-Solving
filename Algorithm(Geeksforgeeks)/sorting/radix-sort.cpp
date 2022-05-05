#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void count_sort(vector<int> &a,int exp)
{
    int n=a.size();
    int out[n];
    int count[10]= {0};
    for(int i=0; i<n; i++)count[(a[i]/exp)%10]++;
    for(int i=1; i<10; i++)count[i]+=count[i-1];
    for(int i=n-1; i>=0; i--)out[--count[(a[i]/exp)%10]]=a[i];
    for(int i=0; i<n; i++)a[i]=out[i];
}
void radix_sort(vector<int> &a)
{
    int m=*max_element(a.begin(),a.end());
    for(int exp=1; m/exp>0; exp*=10)
        count_sort(a,exp);
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
    vector<int> a= {54,57,23,45,99,29};
    radix_sort(a);

    print_vector(a);

    return 0;
}
