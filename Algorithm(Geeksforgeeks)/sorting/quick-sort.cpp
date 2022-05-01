#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int partition(int a[],int lo,int hi)
{
    int pivot=a[hi];
    int i=lo-1;
    for(int j=lo; j<hi; j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[hi]);

    return i+1;

}

void quick_sort(int a[],int lo,int hi)
{
    if(lo<hi)
    {
        int pi=partition(a,lo,hi);
        quick_sort(a,lo,pi-1);
        quick_sort(a,pi+1,hi);
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
    quick_sort(arr, 0, n-1);
    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}


