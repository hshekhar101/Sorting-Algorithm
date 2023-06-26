// In this code, we are going to code for selection sort
// Find the minimum element in unsorted array and swap it with element at begining.

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int *arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Initial array was : ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selection_sort(arr, n);

    cout<<"Final array is : ";
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    delete []arr;

return 0;
}