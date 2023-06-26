// In this code, we are going to sort the array using Bubble sort.
// Repeatedly swapping two adjacent elements

#include <bits/stdc++.h>
using namespace std;

void Bubble_sort(int *arr, int n)
{
    int count=0;
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                count++;
            }
        }
        //If after first iteration, no swapping is done, then terminate the loop will optimize the code to achieve time complexity of O(n), else if we don't terminate the loop the even in sorted array case time complexity will be O(n^2)
        // This is done to optimize the code.
        if(count==0)
        {
            break;
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

    Bubble_sort(arr, n);

    cout << "sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete []arr;

    return 0;
}