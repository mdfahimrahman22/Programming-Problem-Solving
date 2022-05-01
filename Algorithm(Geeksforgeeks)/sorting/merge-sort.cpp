#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void merge(int a[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2],i,j,k;
    for(i=0; i<n1; i++)L[i]=a[l+i];
    for(i=0; i<n2; i++)R[i]=a[m+1+i];
    for(i=0,j=0,k=l; i<n1&&j<n2; k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
    }
    while(i<n1){
        a[k]=L[i];
        i++;k++;
    }
    while(j<n2){
        a[k]=R[j];
        j++;k++;
    }

}

void merge_sort(int a[],int l,int r)
{

    if(l<r)
    {
        int mid=l+(r-l)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,mid,r);
    }

}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    fastIo
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr, 0, n-1);
    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}


