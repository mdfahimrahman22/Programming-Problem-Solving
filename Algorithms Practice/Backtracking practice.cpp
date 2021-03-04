#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
vector<int>v[100];
int v_size;
void print(int temp[],int tempSize,int n)
{
    for(int i=0; i<tempSize; i++)
    {
        v[v_size].push_back(temp[i]);
    }
    v_size++;
}
void backtracking(int a[],int temp[],int pos[],int n,int temp_size,int pos_size,int it,int sum,int desiredSum)
{

    if(sum==desiredSum)
    {
        print(pos,pos_size,n);
        backtracking(a,temp,pos,n,temp_size-1,pos_size-1,it+1,sum-a[it],desiredSum);
    }
    else
    {
        for(int i=it; i<n; i++)
        {
            temp[temp_size]=a[i];
            pos[pos_size]=i;
            backtracking(a,temp,pos,n,temp_size+1,pos_size+1,i+1,sum+a[i],desiredSum);
        }
    }


}
void sumOfSubset(int a[],int n,int desiredSum)
{
    int res[n];
    int pos[n];
    backtracking(a,res,pos,n,0,0,0,0,desiredSum);

}
int main()
{
    fastIo
    int a[]= {5,10,12,13,15,18};
    int n=sizeof(a)/sizeof(a[0]);
    sumOfSubset(a,n,30);
    int max_size=0;
    int max_pos=0;
    for(int j=0; j<v_size; j++)
    {
        if(max_size<v[j].size())
        {
            max_size=v[j].size();
            max_pos=j;
        }
    }
    int sol[n+10]= {0},bin[n+10]= {0};


    for(int i=0; i<v[max_pos].size(); i++)
    {
        sol[v[max_pos][i]]=a[v[max_pos][i]];
        bin[v[max_pos][i]]=1;
    }
    cout<<endl;
//     for(int i=0;i<v[max_pos].size();i++){
//        cout<<a[v[max_pos][i]]<<" ";
//    }
    for(int i=0; i<n; i++)
    {
        cout<<bin[i]<<" ";
    }
    cout<<" & the numbers are ";
    for(int i=0; i<n; i++)
    {
        cout<<sol[i]<<" ";
    }
    cout<<endl;

    return 0;
}

