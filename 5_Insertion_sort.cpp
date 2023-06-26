// This code is to sort the array using Insertion sort
// Insert an element from unsorter array to it's correct position in sorted array.

#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int *arr, int n)
{
    for(int i=1; i<n; i++)
    {
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            swap(arr[j+1], arr[j]);
            j--;
        }
    }
}
int main()
{

   int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Initial array was : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertion_sort(arr, n);

    cout << "sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete []arr;

    return 0;
}